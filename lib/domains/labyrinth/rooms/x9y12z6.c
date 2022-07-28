inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 12, 6 }));
  set_short( "Passage - x9y12z6" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y13z6.c",
  "south" : DIR+"/rooms/x9y11z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
