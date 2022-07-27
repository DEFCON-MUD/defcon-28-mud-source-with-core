inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 27, 7 }));
  set_short( "Passage - x61y27z7" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y28z7.c",
  "south" : DIR+"/rooms/x61y26z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
