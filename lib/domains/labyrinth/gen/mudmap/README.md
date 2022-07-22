# Mudmap

This is a Rust program that will convert .level files into a long list of mud coordinates in the form `x,y,z:[n,w,s,e]`.

To use it:

1. Install `rustup` via the instructions [here](https://www.rust-lang.org/tools/install)
2. Install the most up to date version of Rust using `rustup`
3. Run the program using one of the following commands:
   * `cargo run path-to-directory-of-level-files`
   * `cargo build --release && ./target/release/mudmap path-to-directory-of-level-files`