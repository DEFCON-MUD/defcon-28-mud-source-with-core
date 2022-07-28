inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 5 }));
  set_short( "Hallway - x11y4z5" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z5.c",
  "south" : DIR+"/rooms/x11y3z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
