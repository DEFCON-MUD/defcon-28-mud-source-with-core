inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 51, 7 }));
  set_short( "Hallway - x1y51z7" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y52z7.c",
  "south" : DIR+"/rooms/x1y50z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
