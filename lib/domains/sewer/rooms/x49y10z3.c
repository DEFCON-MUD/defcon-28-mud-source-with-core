inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 3 }));
  set_short( "Corridor - x49y10z3" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y11z3.c",
  "south" : DIR+"/rooms/x49y9z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
