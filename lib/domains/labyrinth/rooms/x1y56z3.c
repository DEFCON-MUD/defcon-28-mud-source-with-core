inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 3 }));
  set_short( "Hallway - x1y56z3" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y56z3.c",
  "north" : DIR+"/rooms/x1y57z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
