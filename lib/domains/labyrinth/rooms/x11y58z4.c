inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 58, 4 }));
  set_short( "Passage - x11y58z4" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y58z4.c",
  "south" : DIR+"/rooms/x11y57z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
