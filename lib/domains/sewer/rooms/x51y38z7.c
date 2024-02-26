inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 7 }));
  set_short( "Passage - x51y38z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y38z7.c",
  "east" : DIR+"/rooms/x52y38z7.c",
  "north" : DIR+"/rooms/x51y39z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
