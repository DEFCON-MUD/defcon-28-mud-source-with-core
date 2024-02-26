inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 10, 3 }));
  set_short( "Passage - x60y10z3" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y10z3.c",
  "east" : DIR+"/rooms/x61y10z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
