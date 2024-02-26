inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 57, 6 }));
  set_short( "Hallway - x5y57z6" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y58z6.c",
  "south" : DIR+"/rooms/x5y56z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
