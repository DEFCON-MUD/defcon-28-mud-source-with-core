inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 2 }));
  set_short( "Hallway - x55y42z2" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z2.c",
  "south" : DIR+"/rooms/x55y41z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
