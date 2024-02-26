inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 23, 2 }));
  set_short( "Passage - x29y23z2" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y24z2.c",
  "south" : DIR+"/rooms/x29y22z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
