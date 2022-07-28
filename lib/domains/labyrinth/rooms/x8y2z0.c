inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 2, 0 }));
  set_short( "Hallway - x8y2z0" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x9y2z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
