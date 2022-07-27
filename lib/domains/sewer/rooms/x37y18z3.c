inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 3 }));
  set_short( "Passage - x37y18z3" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y18z3.c",
  "south" : DIR+"/rooms/x37y17z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
