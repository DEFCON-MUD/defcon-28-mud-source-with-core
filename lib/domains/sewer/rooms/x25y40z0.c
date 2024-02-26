inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 0 }));
  set_short( "Passage - x25y40z0" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y41z0.c",
  "south" : DIR+"/rooms/x25y39z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
