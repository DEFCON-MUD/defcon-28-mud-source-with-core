inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 4, 6 }));
  set_short( "Corridor - x59y4z6" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y4z6.c",
  "north" : DIR+"/rooms/x59y5z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
