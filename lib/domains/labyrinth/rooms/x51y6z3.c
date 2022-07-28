inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 3 }));
  set_short( "Corridor - x51y6z3" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y6z3.c",
  "north" : DIR+"/rooms/x51y7z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
