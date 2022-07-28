inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 5 }));
  set_short( "Passage - x21y56z5" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y56z5.c",
  "north" : DIR+"/rooms/x21y57z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
