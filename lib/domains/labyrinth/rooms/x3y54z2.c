inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 54, 2 }));
  set_short( "Hallway - x3y54z2" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y54z2.c",
  "north" : DIR+"/rooms/x3y55z2.c",
  "south" : DIR+"/rooms/x3y53z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
