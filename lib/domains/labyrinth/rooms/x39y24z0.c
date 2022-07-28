inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 0 }));
  set_short( "Passage - x39y24z0" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y24z0.c",
  "south" : DIR+"/rooms/x39y23z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
