inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 41, 1 }));
  set_short( "Hallway - x11y41z1" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y42z1.c",
  "south" : DIR+"/rooms/x11y40z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the radioactive waste in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
