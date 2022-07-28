inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 62, 3 }));
  set_short( "Hallway - x34y62z3" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y62z3.c",
  "east" : DIR+"/rooms/x35y62z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
