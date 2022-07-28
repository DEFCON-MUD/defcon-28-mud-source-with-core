inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 37, 8 }));
  set_short( "Corridor - x9y37z8" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y38z8.c",
  "south" : DIR+"/rooms/x9y36z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
