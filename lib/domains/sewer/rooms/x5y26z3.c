inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 3 }));
  set_short( "Passage - x5y26z3" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y26z3.c",
  "south" : DIR+"/rooms/x5y25z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
