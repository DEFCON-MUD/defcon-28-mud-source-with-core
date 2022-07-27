inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 64, 5 }));
  set_short( "Hallway - x4y64z5" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y64z5.c",
  "east" : DIR+"/rooms/x5y64z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
