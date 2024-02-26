inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 61, 0 }));
  set_short( "Hallway - x55y61z0" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y62z0.c",
  "south" : DIR+"/rooms/x55y60z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
