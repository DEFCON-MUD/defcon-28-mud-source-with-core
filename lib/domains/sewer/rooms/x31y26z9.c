inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 26, 9 }));
  set_short( "Corridor - x31y26z9" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y26z9.c",
  "north" : DIR+"/rooms/x31y27z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
