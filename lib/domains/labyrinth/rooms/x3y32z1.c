inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 1 }));
  set_short( "Hallway - x3y32z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y32z1.c",
  "south" : DIR+"/rooms/x3y31z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
