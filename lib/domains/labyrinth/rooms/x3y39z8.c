inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 39, 8 }));
  set_short( "Hallway - x3y39z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y40z8.c",
  "south" : DIR+"/rooms/x3y38z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
