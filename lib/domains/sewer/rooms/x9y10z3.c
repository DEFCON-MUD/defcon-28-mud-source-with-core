inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 10, 3 }));
  set_short( "Corridor - x9y10z3" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y11z3.c",
  "south" : DIR+"/rooms/x9y9z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
