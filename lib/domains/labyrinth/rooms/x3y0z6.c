inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 6 }));
  set_short( "Passage - x3y0z6" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z6.c",
  "east" : DIR+"/rooms/x4y0z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
