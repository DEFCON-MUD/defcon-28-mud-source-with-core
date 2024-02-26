inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 7 }));
  set_short( "Corridor - x11y38z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y38z7.c",
  "north" : DIR+"/rooms/x11y39z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
