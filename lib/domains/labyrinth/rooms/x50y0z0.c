inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 0 }));
  set_short( "Passage - x50y0z0" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z0.c",
  "east" : DIR+"/rooms/x51y0z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
