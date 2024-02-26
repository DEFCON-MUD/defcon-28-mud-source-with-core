inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 9, 4 }));
  set_short( "Corridor - x1y9z4" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y10z4.c",
  "south" : DIR+"/rooms/x1y8z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
