inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 8 }));
  set_short( "Passage - x57y20z8" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y20z8.c",
  "south" : DIR+"/rooms/x57y19z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
