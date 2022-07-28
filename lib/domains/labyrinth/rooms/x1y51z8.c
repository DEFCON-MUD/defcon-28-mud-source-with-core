inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 51, 8 }));
  set_short( "Passage - x1y51z8" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y52z8.c",
  "south" : DIR+"/rooms/x1y50z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
