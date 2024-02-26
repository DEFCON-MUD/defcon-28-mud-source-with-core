inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 13, 5 }));
  set_short( "Corridor - x59y13z5" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y14z5.c",
  "south" : DIR+"/rooms/x59y12z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
