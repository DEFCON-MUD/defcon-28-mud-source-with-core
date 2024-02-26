inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 3 }));
  set_short( "Passage - x27y12z3" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y12z3.c",
  "south" : DIR+"/rooms/x27y11z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
