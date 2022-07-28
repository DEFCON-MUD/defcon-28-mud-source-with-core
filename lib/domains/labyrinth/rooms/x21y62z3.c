inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 3 }));
  set_short( "Passage - x21y62z3" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y62z3.c",
  "south" : DIR+"/rooms/x21y61z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
