inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 8 }));
  set_short( "Passage - x19y39z8" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z8.c",
  "south" : DIR+"/rooms/x19y38z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
