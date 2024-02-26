inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 60, 8 }));
  set_short( "Passage - x42y60z8" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y60z8.c",
  "east" : DIR+"/rooms/x43y60z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
