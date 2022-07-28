inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 5 }));
  set_short( "Passage - x10y64z5" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z5.c",
  "east" : DIR+"/rooms/x11y64z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
