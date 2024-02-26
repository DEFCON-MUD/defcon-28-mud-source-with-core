inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 15, 1 }));
  set_short( "Corridor - x41y15z1" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y16z1.c",
  "south" : DIR+"/rooms/x41y14z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
