inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 7 }));
  set_short( "Passage - x10y64z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z7.c",
  "east" : DIR+"/rooms/x11y64z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
