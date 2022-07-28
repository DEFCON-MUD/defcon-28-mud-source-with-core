inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 7, 1 }));
  set_short( "Hallway - x27y7z1" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y8z1.c",
  "south" : DIR+"/rooms/x27y6z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
