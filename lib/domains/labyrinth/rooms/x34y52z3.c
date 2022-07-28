inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 52, 3 }));
  set_short( "Passage - x34y52z3" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y52z3.c",
  "east" : DIR+"/rooms/x35y52z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
