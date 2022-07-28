inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 0 }));
  set_short( "Passage - x36y42z0" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z0.c",
  "east" : DIR+"/rooms/x37y42z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
