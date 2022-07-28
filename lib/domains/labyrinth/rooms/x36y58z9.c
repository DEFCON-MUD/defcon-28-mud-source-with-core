inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 58, 9 }));
  set_short( "Hallway - x36y58z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y58z9.c",
  "east" : DIR+"/rooms/x37y58z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
