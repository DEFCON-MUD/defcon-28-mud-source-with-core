inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 11, 3 }));
  set_short( "Passage - x51y11z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y12z3.c",
  "south" : DIR+"/rooms/x51y10z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
