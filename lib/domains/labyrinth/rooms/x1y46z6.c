inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 46, 6 }));
  set_short( "Hallway - x1y46z6" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y46z6.c",
  "north" : DIR+"/rooms/x1y47z6.c",
  "south" : DIR+"/rooms/x1y45z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
