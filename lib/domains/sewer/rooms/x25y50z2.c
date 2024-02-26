inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 2 }));
  set_short( "Passage - x25y50z2" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
