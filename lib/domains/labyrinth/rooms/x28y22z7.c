inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 22, 7 }));
  set_short( "Passage - x28y22z7" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y22z7.c",
  "east" : DIR+"/rooms/x29y22z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
