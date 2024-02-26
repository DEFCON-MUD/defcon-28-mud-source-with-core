inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 61, 8 }));
  set_short( "Passage - x27y61z8" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y62z8.c",
  "south" : DIR+"/rooms/x27y60z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
