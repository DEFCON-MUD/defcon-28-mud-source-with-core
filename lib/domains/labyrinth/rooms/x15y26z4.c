inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 4 }));
  set_short( "Corridor - x15y26z4" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y27z4.c",
  "south" : DIR+"/rooms/x15y25z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
