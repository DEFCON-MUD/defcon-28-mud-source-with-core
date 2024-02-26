inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 8 }));
  set_short( "Hallway - x41y10z8" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y10z8.c",
  "south" : DIR+"/rooms/x41y9z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
