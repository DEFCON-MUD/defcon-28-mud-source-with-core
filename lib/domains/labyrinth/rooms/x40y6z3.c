inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 3 }));
  set_short( "Corridor - x40y6z3" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z3.c",
  "east" : DIR+"/rooms/x41y6z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
