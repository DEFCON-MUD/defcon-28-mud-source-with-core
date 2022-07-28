inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 20, 2 }));
  set_short( "Passage - x51y20z2" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y20z2.c",
  "north" : DIR+"/rooms/x51y21z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
