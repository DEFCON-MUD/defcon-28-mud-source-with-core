inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 58, 6 }));
  set_short( "Passage - x1y58z6" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y58z6.c",
  "south" : DIR+"/rooms/x1y57z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
