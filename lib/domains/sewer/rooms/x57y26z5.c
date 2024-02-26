inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 5 }));
  set_short( "Corridor - x57y26z5" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y26z5.c",
  "north" : DIR+"/rooms/x57y27z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
