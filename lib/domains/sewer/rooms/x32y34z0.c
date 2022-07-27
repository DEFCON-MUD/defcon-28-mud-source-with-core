inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 34, 0 }));
  set_short( "Hallway - x32y34z0" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y34z0.c",
  "east" : DIR+"/rooms/x33y34z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
