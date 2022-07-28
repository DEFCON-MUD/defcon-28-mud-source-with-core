inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 56, 3 }));
  set_short( "Hallway - x2y56z3" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y56z3.c",
  "east" : DIR+"/rooms/x3y56z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
