inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 55, 3 }));
  set_short( "Hallway - x37y55z3" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y56z3.c",
  "south" : DIR+"/rooms/x37y54z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
