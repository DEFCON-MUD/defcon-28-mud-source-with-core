inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 5 }));
  set_short( "Passage - x60y64z5" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z5.c",
  "east" : DIR+"/rooms/x61y64z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
