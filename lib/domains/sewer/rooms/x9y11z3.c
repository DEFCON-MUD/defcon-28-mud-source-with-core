inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 11, 3 }));
  set_short( "Passage - x9y11z3" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y12z3.c",
  "south" : DIR+"/rooms/x9y10z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
