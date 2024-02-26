inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 1 }));
  set_short( "Corridor - x57y17z1" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z1.c",
  "south" : DIR+"/rooms/x57y16z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
