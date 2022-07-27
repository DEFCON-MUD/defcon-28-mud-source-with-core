inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 2 }));
  set_short( "Hallway - x29y12z2" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y12z2.c",
  "east" : DIR+"/rooms/x30y12z2.c",
  "north" : DIR+"/rooms/x29y13z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
