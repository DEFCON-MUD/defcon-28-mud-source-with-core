inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 2 }));
  set_short( "Corridor - x3y8z2" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "south" : DIR+"/rooms/x3y7z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
