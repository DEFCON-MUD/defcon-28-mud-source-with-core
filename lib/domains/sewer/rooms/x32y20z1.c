inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 20, 1 }));
  set_short( "Passage - x32y20z1" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y20z1.c",
  "east" : DIR+"/rooms/x33y20z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
