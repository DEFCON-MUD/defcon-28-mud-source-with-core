inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 13, 1 }));
  set_short( "Corridor - x39y13z1" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y14z1.c",
  "south" : DIR+"/rooms/x39y12z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
