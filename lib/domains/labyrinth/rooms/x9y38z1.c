inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 38, 1 }));
  set_short( "Corridor - x9y38z1" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y38z1.c",
  "east" : DIR+"/rooms/x10y38z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
