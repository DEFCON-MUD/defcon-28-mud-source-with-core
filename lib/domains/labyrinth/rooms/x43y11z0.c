inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 11, 0 }));
  set_short( "Hallway - x43y11z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y12z0.c",
  "south" : DIR+"/rooms/x43y10z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
