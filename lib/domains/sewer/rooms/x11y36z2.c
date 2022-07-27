inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 2 }));
  set_short( "Hallway - x11y36z2" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z2.c",
  "north" : DIR+"/rooms/x11y37z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
