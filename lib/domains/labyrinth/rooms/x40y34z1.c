inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 34, 1 }));
  set_short( "Hallway - x40y34z1" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y34z1.c",
  "east" : DIR+"/rooms/x41y34z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
