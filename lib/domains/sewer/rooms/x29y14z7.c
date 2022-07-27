inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 7 }));
  set_short( "Hallway - x29y14z7" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y15z7.c",
  "south" : DIR+"/rooms/x29y13z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
