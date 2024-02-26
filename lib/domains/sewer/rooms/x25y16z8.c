inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 8 }));
  set_short( "Passage - x25y16z8" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y16z8.c",
  "east" : DIR+"/rooms/x26y16z8.c",
  "south" : DIR+"/rooms/x25y15z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
