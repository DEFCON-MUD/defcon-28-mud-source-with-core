inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 8, 7 }));
  set_short( "Hallway - x31y8z7" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y8z7.c",
  "north" : DIR+"/rooms/x31y9z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
