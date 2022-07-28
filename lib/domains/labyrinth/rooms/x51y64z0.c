inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 0 }));
  set_short( "Passage - x51y64z0" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z0.c",
  "east" : DIR+"/rooms/x52y64z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
