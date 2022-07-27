inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 44, 1 }));
  set_short( "Hallway - x20y44z1" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y44z1.c",
  "east" : DIR+"/rooms/x21y44z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
