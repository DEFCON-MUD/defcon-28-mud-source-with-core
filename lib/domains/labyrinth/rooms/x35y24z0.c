inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 24, 0 }));
  set_short( "Hallway - x35y24z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y24z0.c",
  "north" : DIR+"/rooms/x35y25z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
