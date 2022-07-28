inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 5 }));
  set_short( "Corridor - x3y64z5" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z5.c",
  "east" : DIR+"/rooms/x4y64z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
