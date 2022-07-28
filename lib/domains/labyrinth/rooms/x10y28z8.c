inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 28, 8 }));
  set_short( "Passage - x10y28z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y28z8.c",
  "east" : DIR+"/rooms/x11y28z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
