inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 29, 7 }));
  set_short( "Hallway - x43y29z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y30z7.c",
  "south" : DIR+"/rooms/x43y28z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
