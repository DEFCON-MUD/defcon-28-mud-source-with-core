inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 4 }));
  set_short( "Hallway - x5y42z4" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z4.c",
  "north" : DIR+"/rooms/x5y43z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
