inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 42, 2 }));
  set_short( "Passage - x24y42z2" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y42z2.c",
  "east" : DIR+"/rooms/x25y42z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
