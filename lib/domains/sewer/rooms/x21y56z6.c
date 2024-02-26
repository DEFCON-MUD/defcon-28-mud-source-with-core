inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 6 }));
  set_short( "Corridor - x21y56z6" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y57z6.c",
  "south" : DIR+"/rooms/x21y55z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
