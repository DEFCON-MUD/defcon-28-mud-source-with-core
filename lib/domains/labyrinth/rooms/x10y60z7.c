inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 60, 7 }));
  set_short( "Passage - x10y60z7" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y60z7.c",
  "east" : DIR+"/rooms/x11y60z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
