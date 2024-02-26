inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 4 }));
  set_short( "Hallway - x39y50z4" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y51z4.c",
  "south" : DIR+"/rooms/x39y49z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
