inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 37, 6 }));
  set_short( "Corridor - x41y37z6" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y38z6.c",
  "south" : DIR+"/rooms/x41y36z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
