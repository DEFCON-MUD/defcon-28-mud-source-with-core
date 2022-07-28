inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 8 }));
  set_short( "Corridor - x61y58z8" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y58z8.c",
  "north" : DIR+"/rooms/x61y59z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
