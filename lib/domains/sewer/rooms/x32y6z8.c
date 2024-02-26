inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 6, 8 }));
  set_short( "Passage - x32y6z8" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y6z8.c",
  "east" : DIR+"/rooms/x33y6z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
