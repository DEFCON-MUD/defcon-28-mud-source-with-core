inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 4 }));
  set_short( "Hallway - x3y20z4" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y21z4.c",
  "south" : DIR+"/rooms/x3y19z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
