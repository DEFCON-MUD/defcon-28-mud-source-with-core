inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 26, 4 }));
  set_short( "Passage - x35y26z4" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y26z4.c",
  "south" : DIR+"/rooms/x35y25z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
