inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 29, 4 }));
  set_short( "Hallway - x21y29z4" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y30z4.c",
  "south" : DIR+"/rooms/x21y28z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
