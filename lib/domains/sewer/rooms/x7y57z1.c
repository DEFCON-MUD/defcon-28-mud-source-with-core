inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 57, 1 }));
  set_short( "Hallway - x7y57z1" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y58z1.c",
  "south" : DIR+"/rooms/x7y56z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
