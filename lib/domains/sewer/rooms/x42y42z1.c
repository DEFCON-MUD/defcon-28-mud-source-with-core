inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 42, 1 }));
  set_short( "Hallway - x42y42z1" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y42z1.c",
  "east" : DIR+"/rooms/x43y42z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
