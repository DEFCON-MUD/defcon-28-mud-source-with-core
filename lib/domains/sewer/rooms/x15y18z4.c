inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 18, 4 }));
  set_short( "Corridor - x15y18z4" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y18z4.c",
  "south" : DIR+"/rooms/x15y17z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
