inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 3 }));
  set_short( "Corridor - x23y32z3" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y32z3.c",
  "north" : DIR+"/rooms/x23y33z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
