inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 28, 9 }));
  set_short( "Passage - x10y28z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y28z9.c",
  "east" : DIR+"/rooms/x11y28z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
