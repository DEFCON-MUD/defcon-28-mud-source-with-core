inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 4 }));
  set_short( "Passage - x59y56z4" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y56z4.c",
  "south" : DIR+"/rooms/x59y55z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
