inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 26, 0 }));
  set_short( "Passage - x60y26z0" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y26z0.c",
  "east" : DIR+"/rooms/x61y26z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
