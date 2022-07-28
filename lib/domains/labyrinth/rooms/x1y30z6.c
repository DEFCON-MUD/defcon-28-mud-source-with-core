inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 6 }));
  set_short( "Corridor - x1y30z6" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y30z6.c",
  "north" : DIR+"/rooms/x1y31z6.c",
  "south" : DIR+"/rooms/x1y29z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
