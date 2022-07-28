inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 39, 1 }));
  set_short( "Hallway - x51y39z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y40z1.c",
  "south" : DIR+"/rooms/x51y38z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
