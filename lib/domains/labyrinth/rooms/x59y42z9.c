inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 9 }));
  set_short( "Corridor - x59y42z9" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y42z9.c",
  "east" : DIR+"/rooms/x60y42z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
