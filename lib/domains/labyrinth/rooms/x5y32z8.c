inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 8 }));
  set_short( "Hallway - x5y32z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y32z8.c",
  "east" : DIR+"/rooms/x6y32z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
