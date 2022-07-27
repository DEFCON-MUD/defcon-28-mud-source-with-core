inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 0 }));
  set_short( "Corridor - x25y14z0" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y15z0.c",
  "south" : DIR+"/rooms/x25y13z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
