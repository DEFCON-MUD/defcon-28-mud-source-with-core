inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 21, 3 }));
  set_short( "Hallway - x55y21z3" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y22z3.c",
  "south" : DIR+"/rooms/x55y20z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
