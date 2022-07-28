inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 2 }));
  set_short( "Corridor - x9y56z2" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y56z2.c",
  "north" : DIR+"/rooms/x9y57z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
