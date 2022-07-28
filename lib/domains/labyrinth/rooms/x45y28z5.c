inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 28, 5 }));
  set_short( "Passage - x45y28z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y28z5.c",
  "north" : DIR+"/rooms/x45y29z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
