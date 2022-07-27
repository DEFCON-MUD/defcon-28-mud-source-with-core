inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 9 }));
  set_short( "Corridor - x29y60z9" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y60z9.c",
  "east" : DIR+"/rooms/x30y60z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
