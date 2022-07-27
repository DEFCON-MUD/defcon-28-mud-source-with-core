inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 4 }));
  set_short( "Passage - x57y10z4" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y11z4.c",
  "south" : DIR+"/rooms/x57y9z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
