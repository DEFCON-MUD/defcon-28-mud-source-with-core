inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 58, 8 }));
  set_short( "Corridor - x47y58z8" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y58z8.c",
  "south" : DIR+"/rooms/x47y57z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
