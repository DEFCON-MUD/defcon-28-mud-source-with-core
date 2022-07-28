inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 40, 0 }));
  set_short( "Corridor - x36y40z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y40z0.c",
  "east" : DIR+"/rooms/x37y40z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
