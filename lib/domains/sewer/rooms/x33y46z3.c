inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 3 }));
  set_short( "Hallway - x33y46z3" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y46z3.c",
  "south" : DIR+"/rooms/x33y45z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
