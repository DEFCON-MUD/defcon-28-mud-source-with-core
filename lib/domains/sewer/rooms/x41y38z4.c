inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 4 }));
  set_short( "Corridor - x41y38z4" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y39z4.c",
  "south" : DIR+"/rooms/x41y37z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
