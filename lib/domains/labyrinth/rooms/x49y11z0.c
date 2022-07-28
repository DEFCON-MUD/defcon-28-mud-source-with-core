inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 11, 0 }));
  set_short( "Passage - x49y11z0" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y12z0.c",
  "south" : DIR+"/rooms/x49y10z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
