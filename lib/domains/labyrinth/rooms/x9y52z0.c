inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 52, 0 }));
  set_short( "Hallway - x9y52z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y53z0.c",
  "south" : DIR+"/rooms/x9y51z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
