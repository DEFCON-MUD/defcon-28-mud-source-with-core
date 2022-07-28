inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 6, 3 }));
  set_short( "Corridor - x54y6z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y6z3.c",
  "east" : DIR+"/rooms/x55y6z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
