inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 10, 7 }));
  set_short( "Passage - x13y10z7" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y11z7.c",
  "south" : DIR+"/rooms/x13y9z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
