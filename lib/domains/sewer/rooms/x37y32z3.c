inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 3 }));
  set_short( "Passage - x37y32z3" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y33z3.c",
  "south" : DIR+"/rooms/x37y31z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
