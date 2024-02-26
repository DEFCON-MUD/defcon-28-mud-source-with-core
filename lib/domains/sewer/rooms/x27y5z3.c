inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 5, 3 }));
  set_short( "Corridor - x27y5z3" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y6z3.c",
  "south" : DIR+"/rooms/x27y4z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
