inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 0 }));
  set_short( "Corridor - x19y12z0" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y12z0.c",
  "south" : DIR+"/rooms/x19y11z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
