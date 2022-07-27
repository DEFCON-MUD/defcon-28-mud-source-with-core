inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 4 }));
  set_short( "Hallway - x57y18z4" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y19z4.c",
  "south" : DIR+"/rooms/x57y17z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
