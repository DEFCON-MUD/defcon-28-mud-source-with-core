inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 51, 3 }));
  set_short( "Passage - x57y51z3" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y52z3.c",
  "south" : DIR+"/rooms/x57y50z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
