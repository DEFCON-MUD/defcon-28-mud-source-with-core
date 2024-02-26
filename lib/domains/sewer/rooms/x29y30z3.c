inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 3 }));
  set_short( "Corridor - x29y30z3" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y30z3.c",
  "south" : DIR+"/rooms/x29y29z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
