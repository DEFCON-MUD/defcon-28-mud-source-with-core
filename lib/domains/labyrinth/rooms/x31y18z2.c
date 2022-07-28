inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 18, 2 }));
  set_short( "Corridor - x31y18z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y18z2.c",
  "north" : DIR+"/rooms/x31y19z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
