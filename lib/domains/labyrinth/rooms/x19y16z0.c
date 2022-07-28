inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 0 }));
  set_short( "Hallway - x19y16z0" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y16z0.c",
  "north" : DIR+"/rooms/x19y17z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
