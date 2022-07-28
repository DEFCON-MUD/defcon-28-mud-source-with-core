inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 28, 5 }));
  set_short( "Corridor - x23y28z5" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y28z5.c",
  "east" : DIR+"/rooms/x24y28z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
