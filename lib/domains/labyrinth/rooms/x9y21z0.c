inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 21, 0 }));
  set_short( "Passage - x9y21z0" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y22z0.c",
  "south" : DIR+"/rooms/x9y20z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
