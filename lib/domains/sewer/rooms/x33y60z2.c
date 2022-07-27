inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 60, 2 }));
  set_short( "Passage - x33y60z2" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y60z2.c",
  "south" : DIR+"/rooms/x33y59z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
