inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 9 }));
  set_short( "Hallway - x7y52z9" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y53z9.c",
  "south" : DIR+"/rooms/x7y51z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
