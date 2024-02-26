inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 15, 8 }));
  set_short( "Passage - x7y15z8" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y16z8.c",
  "south" : DIR+"/rooms/x7y14z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
