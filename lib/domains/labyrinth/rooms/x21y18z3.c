inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 3 }));
  set_short( "Passage - x21y18z3" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y18z3.c",
  "east" : DIR+"/rooms/x22y18z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
