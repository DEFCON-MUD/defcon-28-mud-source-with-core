inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 4 }));
  set_short( "Passage - x57y54z4" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y54z4.c",
  "north" : DIR+"/rooms/x57y55z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
