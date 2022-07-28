inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 0 }));
  set_short( "Passage - x11y4z0" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y4z0.c",
  "north" : DIR+"/rooms/x11y5z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
