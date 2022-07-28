inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 5 }));
  set_short( "Passage - x57y58z5" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y58z5.c",
  "north" : DIR+"/rooms/x57y59z5.c",
  "south" : DIR+"/rooms/x57y57z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
