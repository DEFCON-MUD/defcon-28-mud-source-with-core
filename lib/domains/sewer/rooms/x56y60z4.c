inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 60, 4 }));
  set_short( "Passage - x56y60z4" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y60z4.c",
  "east" : DIR+"/rooms/x57y60z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
