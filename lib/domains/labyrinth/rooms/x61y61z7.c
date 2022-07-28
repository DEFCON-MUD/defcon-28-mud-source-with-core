inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 61, 7 }));
  set_short( "Passage - x61y61z7" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y62z7.c",
  "south" : DIR+"/rooms/x61y60z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
