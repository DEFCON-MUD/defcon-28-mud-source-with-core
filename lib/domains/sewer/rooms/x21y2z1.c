inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 2, 1 }));
  set_short( "Passage - x21y2z1" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y2z1.c",
  "north" : DIR+"/rooms/x21y3z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
