inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 3 }));
  set_short( "Passage - x49y6z3" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y6z3.c",
  "north" : DIR+"/rooms/x49y7z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
