inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 42, 0 }));
  set_short( "Hallway - x58y42z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y42z0.c",
  "east" : DIR+"/rooms/x59y42z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
