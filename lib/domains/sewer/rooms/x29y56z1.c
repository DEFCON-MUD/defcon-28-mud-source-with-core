inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 1 }));
  set_short( "Passage - x29y56z1" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y57z1.c",
  "south" : DIR+"/rooms/x29y55z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
