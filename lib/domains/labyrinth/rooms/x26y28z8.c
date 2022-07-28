inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 28, 8 }));
  set_short( "Passage - x26y28z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y28z8.c",
  "east" : DIR+"/rooms/x27y28z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
