inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 3 }));
  set_short( "Corridor - x11y56z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y56z3.c",
  "north" : DIR+"/rooms/x11y57z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
