inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 62, 4 }));
  set_short( "Passage - x40y62z4" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y62z4.c",
  "east" : DIR+"/rooms/x41y62z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
