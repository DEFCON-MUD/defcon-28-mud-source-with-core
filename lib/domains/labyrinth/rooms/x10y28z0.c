inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 28, 0 }));
  set_short( "Hallway - x10y28z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y28z0.c",
  "east" : DIR+"/rooms/x11y28z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
