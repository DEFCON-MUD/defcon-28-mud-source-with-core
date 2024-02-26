inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 32, 1 }));
  set_short( "Passage - x60y32z1" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y32z1.c",
  "east" : DIR+"/rooms/x61y32z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
