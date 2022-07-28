inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 2 }));
  set_short( "Hallway - x15y42z2" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y42z2.c",
  "north" : DIR+"/rooms/x15y43z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
