inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 45, 6 }));
  set_short( "Passage - x61y45z6" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y46z6.c",
  "south" : DIR+"/rooms/x61y44z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
