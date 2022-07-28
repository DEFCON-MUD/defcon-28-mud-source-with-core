inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 2 }));
  set_short( "Hallway - x25y14z2" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y14z2.c",
  "south" : DIR+"/rooms/x25y13z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
