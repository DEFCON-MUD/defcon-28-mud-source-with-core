inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 0, 4 }));
  set_short( "Passage - x34y0z4" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y0z4.c",
  "east" : DIR+"/rooms/x35y0z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
