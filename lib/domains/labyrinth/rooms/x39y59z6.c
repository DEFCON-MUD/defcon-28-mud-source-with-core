inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 59, 6 }));
  set_short( "Corridor - x39y59z6" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y60z6.c",
  "south" : DIR+"/rooms/x39y58z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
