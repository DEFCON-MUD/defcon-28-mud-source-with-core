inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 30, 5 }));
  set_short( "Corridor - x25y30z5" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y30z5.c",
  "east" : DIR+"/rooms/x26y30z5.c",
  "south" : DIR+"/rooms/x25y29z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
