inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 0, 4 }));
  set_short( "Corridor - x31y0z4" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y0z4.c",
  "east" : DIR+"/rooms/x32y0z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
