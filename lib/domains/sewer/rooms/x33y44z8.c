inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 8 }));
  set_short( "Passage - x33y44z8" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y44z8.c",
  "south" : DIR+"/rooms/x33y43z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
