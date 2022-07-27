inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 28, 4 }));
  set_short( "Corridor - x53y28z4" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y28z4.c",
  "north" : DIR+"/rooms/x53y29z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
