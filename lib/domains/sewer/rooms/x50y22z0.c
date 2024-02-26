inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 22, 0 }));
  set_short( "Passage - x50y22z0" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y22z0.c",
  "east" : DIR+"/rooms/x51y22z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
