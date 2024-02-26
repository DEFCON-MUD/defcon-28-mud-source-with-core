inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 44, 1 }));
  set_short( "Passage - x50y44z1" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y44z1.c",
  "east" : DIR+"/rooms/x51y44z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
