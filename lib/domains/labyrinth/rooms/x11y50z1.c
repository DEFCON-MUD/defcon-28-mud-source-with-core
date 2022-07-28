inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 50, 1 }));
  set_short( "Corridor - x11y50z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y50z1.c",
  "east" : DIR+"/rooms/x12y50z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
