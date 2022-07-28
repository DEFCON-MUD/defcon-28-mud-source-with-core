inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 6 }));
  set_short( "Hallway - x45y56z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y56z6.c",
  "south" : DIR+"/rooms/x45y55z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
