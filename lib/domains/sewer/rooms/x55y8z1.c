inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 8, 1 }));
  set_short( "Corridor - x55y8z1" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y9z1.c",
  "south" : DIR+"/rooms/x55y7z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
