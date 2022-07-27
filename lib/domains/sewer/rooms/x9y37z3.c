inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 37, 3 }));
  set_short( "Passage - x9y37z3" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y38z3.c",
  "south" : DIR+"/rooms/x9y36z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
