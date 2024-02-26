inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 38, 0 }));
  set_short( "Corridor - x33y38z0" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y39z0.c",
  "south" : DIR+"/rooms/x33y37z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
