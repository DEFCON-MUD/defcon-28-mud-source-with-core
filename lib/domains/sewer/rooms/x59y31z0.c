inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 31, 0 }));
  set_short( "Passage - x59y31z0" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y32z0.c",
  "south" : DIR+"/rooms/x59y30z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
