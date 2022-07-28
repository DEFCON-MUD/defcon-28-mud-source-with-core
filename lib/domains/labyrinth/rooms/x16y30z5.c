inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 30, 5 }));
  set_short( "Corridor - x16y30z5" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y30z5.c",
  "east" : DIR+"/rooms/x17y30z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
