inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 19, 0 }));
  set_short( "Passage - x51y19z0" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y20z0.c",
  "south" : DIR+"/rooms/x51y18z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
