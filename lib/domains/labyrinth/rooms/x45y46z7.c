inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 46, 7 }));
  set_short( "Passage - x45y46z7" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y46z7.c",
  "north" : DIR+"/rooms/x45y47z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
