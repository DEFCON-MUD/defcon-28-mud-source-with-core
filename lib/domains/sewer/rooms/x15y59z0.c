inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 59, 0 }));
  set_short( "Corridor - x15y59z0" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y60z0.c",
  "south" : DIR+"/rooms/x15y58z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
