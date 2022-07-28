inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 4 }));
  set_short( "Corridor - x59y60z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y60z4.c",
  "south" : DIR+"/rooms/x59y59z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
