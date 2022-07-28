inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 30, 3 }));
  set_short( "Passage - x9y30z3" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y30z3.c",
  "north" : DIR+"/rooms/x9y31z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
