inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 3 }));
  set_short( "Hallway - x47y20z3" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y20z3.c",
  "south" : DIR+"/rooms/x47y19z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
