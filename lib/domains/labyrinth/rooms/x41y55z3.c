inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 55, 3 }));
  set_short( "Passage - x41y55z3" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y56z3.c",
  "south" : DIR+"/rooms/x41y54z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
