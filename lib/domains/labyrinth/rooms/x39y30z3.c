inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 3 }));
  set_short( "Corridor - x39y30z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y30z3.c",
  "north" : DIR+"/rooms/x39y31z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
