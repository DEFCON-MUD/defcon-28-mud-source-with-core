inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 48, 8 }));
  set_short( "Passage - x24y48z8" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y48z8.c",
  "east" : DIR+"/rooms/x25y48z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
