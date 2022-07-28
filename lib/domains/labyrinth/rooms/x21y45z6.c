inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 45, 6 }));
  set_short( "Hallway - x21y45z6" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y46z6.c",
  "south" : DIR+"/rooms/x21y44z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
