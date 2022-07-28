inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 6 }));
  set_short( "Passage - x1y12z6" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y13z6.c",
  "south" : DIR+"/rooms/x1y11z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
