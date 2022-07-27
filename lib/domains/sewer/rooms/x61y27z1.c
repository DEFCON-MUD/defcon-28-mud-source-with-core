inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 27, 1 }));
  set_short( "Corridor - x61y27z1" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y28z1.c",
  "south" : DIR+"/rooms/x61y26z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
