inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 9, 6 }));
  set_short( "Hallway - x25y9z6" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y10z6.c",
  "south" : DIR+"/rooms/x25y8z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
