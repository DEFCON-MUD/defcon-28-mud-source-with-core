inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 4 }));
  set_short( "Passage - x55y32z4" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y32z4.c",
  "south" : DIR+"/rooms/x55y31z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
