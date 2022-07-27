inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 3 }));
  set_short( "Passage - x19y22z3" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y22z3.c",
  "south" : DIR+"/rooms/x19y21z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
