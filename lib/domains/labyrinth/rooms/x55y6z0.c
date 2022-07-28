inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 0 }));
  set_short( "Corridor - x55y6z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z0.c",
  "east" : DIR+"/rooms/x56y6z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
