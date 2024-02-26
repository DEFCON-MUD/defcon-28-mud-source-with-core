inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 2 }));
  set_short( "Hallway - x49y30z2" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y30z2.c",
  "north" : DIR+"/rooms/x49y31z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
