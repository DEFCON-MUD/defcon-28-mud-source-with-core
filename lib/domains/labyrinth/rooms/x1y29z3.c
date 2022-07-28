inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 29, 3 }));
  set_short( "Passage - x1y29z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y30z3.c",
  "south" : DIR+"/rooms/x1y28z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
