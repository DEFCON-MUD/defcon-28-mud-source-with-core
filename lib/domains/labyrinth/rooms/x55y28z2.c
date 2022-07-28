inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 28, 2 }));
  set_short( "Hallway - x55y28z2" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y28z2.c",
  "north" : DIR+"/rooms/x55y29z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
