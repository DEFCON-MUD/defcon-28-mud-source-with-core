inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 8 }));
  set_short( "Hallway - x5y28z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y28z8.c",
  "east" : DIR+"/rooms/x6y28z8.c",
  "south" : DIR+"/rooms/x5y27z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
