inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 4 }));
  set_short( "Passage - x23y26z4" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y26z4.c",
  "south" : DIR+"/rooms/x23y25z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
