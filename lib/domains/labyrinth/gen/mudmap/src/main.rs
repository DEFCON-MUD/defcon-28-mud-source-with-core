const LEVELS_EXTENSION: &str = "level";
const LEVELS_CHAR_ROOM: char = ' ';
const LEVELS_CHAR_WALL: char = '#';
const OUTPUT_CELL_DELIMITER: &str = "\n";
const OUTPUT_SECTION_DELIMITER: &str = ":";

use color_eyre::eyre::Result;
use std::env;
use std::fs;
use std::io::{self, BufRead};
use std::path::Path;
use std::process;

fn main() -> Result<()> {
    color_eyre::install()?;

    let args: Vec<String> = env::args().collect();
    let path = args.get(1);
    if let None = path {
        println!("Must provide levels directory as first positional argument.");
        process::exit(0x0001);
    }

    let levels_path = Path::new(path.unwrap());

    println!(
        "Scanning for levels in {:?}.",
        Path::canonicalize(levels_path)?
    );

    let entries = fs::read_dir(levels_path)?;
    let mut levels: Vec<fs::DirEntry> = entries
        .filter_map(|entry| {
            let e = entry.unwrap();
            let path = e.path();
            let metadata = fs::metadata(&path).unwrap();

            if metadata.is_file() && {
                let ref this = path.extension();
                let x = &LEVELS_EXTENSION;
                match this {
                    Some(y) => x.eq(y),
                    None => false,
                }
            } {
                return Some(e);
            }

            return None;
        })
        .collect();

    println!("Found and will parse {:?} level(s):", levels.len());

    let mut cells: Vec<Cell> = Vec::new();
    let mut z = 0;

    // Levels should be searched in ascending lexicographic order
    levels.sort_by(|a, b| a.path().cmp(&b.path()));

    for level in levels {
        let entry = level;
        let path = entry.path();

        println!("Parsing {:?}...", Path::canonicalize(&path)?);

        let lines = read_lines(path)?;
        let mut y = 0;
        let mut rowlen: usize;

        for line in lines {
            let mut x = 0;
            let line = line?;
            rowlen = line.len();
            let chars = line.chars();

            for char in chars {
                let mut cell = Cell {
                    char: match char {
                        LEVELS_CHAR_ROOM => LEVELS_CHAR_ROOM,
                        _ => LEVELS_CHAR_WALL,
                    },
                    x,
                    y,
                    z,
                    exits: Vec::new(),
                };

                // Consider that each exit is a corridor to an exit in another room, so it only makes sense to create them together.
                // Iterators don't let us look into the future, so we are looking for corridors behind the cursor.
                if LEVELS_CHAR_ROOM == cell.char {
                    // East-West is based on the last cell
                    let last_cell = cells.last_mut();
                    if let Some(l) = last_cell {
                        if LEVELS_CHAR_ROOM == l.char {
                            l.exits.push("e".to_string());
                            cell.exits.push("w".to_string());
                        }
                    }

                    // We can't look behind the first row.
                    if y > 1 {
                        // North-South is based on the cell in the same position on the last row
                        let cells_len = cells.len();
                        let cell_in_last_row = cells.get_mut(cells_len - rowlen);
                        if let Some(l) = cell_in_last_row {
                            if LEVELS_CHAR_ROOM == l.char {
                                l.exits.push("n".to_string());
                                cell.exits.push("s".to_string());
                            }
                        }
                    }
                }

                cells.push(cell);
                x += 1;
            }
            y += 1;
        }
        z += 1;
    }

    let coords: Vec<String> = cells
        .iter()
        .filter(|cell| cell.char == LEVELS_CHAR_ROOM)
        .map(|cell| cell.to_string())
        .collect();
    println!("{}", coords.join(OUTPUT_CELL_DELIMITER));

    Ok(())
}

struct Cell {
    char: char,
    x: u16,
    y: u16,
    z: u16,
    exits: Vec<String>,
}

impl Cell {
    fn to_string(&self) -> String {
        format!(
            "{},{},{}{}{}",
            self.x,
            self.y,
            self.z,
            OUTPUT_SECTION_DELIMITER,
            self.exits.join(",")
        )
    }
}

fn read_lines<P>(filename: P) -> io::Result<io::Lines<io::BufReader<fs::File>>>
where
    P: AsRef<Path>,
{
    let file = fs::File::open(filename)?;
    Ok(io::BufReader::new(file).lines())
}
