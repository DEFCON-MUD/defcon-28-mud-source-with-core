inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 5, 2 }));
  set_short( "Passage - x3y5z2" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y6z2.c",
  "south" : DIR+"/rooms/x3y4z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
