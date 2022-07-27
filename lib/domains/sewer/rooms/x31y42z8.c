inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 8 }));
  set_short( "Hallway - x31y42z8" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y42z8.c",
  "north" : DIR+"/rooms/x31y43z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
