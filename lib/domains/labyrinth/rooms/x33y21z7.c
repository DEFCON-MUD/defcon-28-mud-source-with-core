inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 21, 7 }));
  set_short( "Corridor - x33y21z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y22z7.c",
  "south" : DIR+"/rooms/x33y20z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
