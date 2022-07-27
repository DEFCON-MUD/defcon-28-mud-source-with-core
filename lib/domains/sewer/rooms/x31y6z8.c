inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 6, 8 }));
  set_short( "Corridor - x31y6z8" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y6z8.c",
  "east" : DIR+"/rooms/x32y6z8.c",
  "north" : DIR+"/rooms/x31y7z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
