inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 7 }));
  set_short( "Passage - x11y20z7" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y20z7.c",
  "south" : DIR+"/rooms/x11y19z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
