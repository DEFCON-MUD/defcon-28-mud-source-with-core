inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 55, 3 }));
  set_short( "Hallway - x55y55z3" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y56z3.c",
  "south" : DIR+"/rooms/x55y54z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
