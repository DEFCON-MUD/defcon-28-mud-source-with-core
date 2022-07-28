inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 51, 1 }));
  set_short( "Hallway - x51y51z1" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y52z1.c",
  "south" : DIR+"/rooms/x51y50z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
