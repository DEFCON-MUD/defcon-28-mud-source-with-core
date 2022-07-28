inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 15, 7 }));
  set_short( "Passage - x9y15z7" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y16z7.c",
  "south" : DIR+"/rooms/x9y14z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
