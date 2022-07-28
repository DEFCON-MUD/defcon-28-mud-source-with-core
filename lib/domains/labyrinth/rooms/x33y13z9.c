inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 13, 9 }));
  set_short( "Passage - x33y13z9" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y14z9.c",
  "south" : DIR+"/rooms/x33y12z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
