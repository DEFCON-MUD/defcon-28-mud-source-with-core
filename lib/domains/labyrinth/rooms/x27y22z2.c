inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 22, 2 }));
  set_short( "Hallway - x27y22z2" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y22z2.c",
  "north" : DIR+"/rooms/x27y23z2.c",
  "south" : DIR+"/rooms/x27y21z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
