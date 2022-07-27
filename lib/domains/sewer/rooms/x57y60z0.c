inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 0 }));
  set_short( "Hallway - x57y60z0" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y60z0.c",
  "north" : DIR+"/rooms/x57y61z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
