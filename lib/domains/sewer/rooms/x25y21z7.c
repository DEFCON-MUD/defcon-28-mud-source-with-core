inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 21, 7 }));
  set_short( "Passage - x25y21z7" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y22z7.c",
  "south" : DIR+"/rooms/x25y20z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
