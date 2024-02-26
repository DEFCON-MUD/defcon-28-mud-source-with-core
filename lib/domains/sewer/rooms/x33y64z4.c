inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 64, 4 }));
  set_short( "Passage - x33y64z4" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y64z4.c",
  "east" : DIR+"/rooms/x34y64z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
