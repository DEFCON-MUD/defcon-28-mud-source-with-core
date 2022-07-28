inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 3 }));
  set_short( "Hallway - x29y27z3" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z3.c",
  "south" : DIR+"/rooms/x29y26z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
