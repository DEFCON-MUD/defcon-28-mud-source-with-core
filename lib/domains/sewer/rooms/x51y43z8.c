inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 43, 8 }));
  set_short( "Corridor - x51y43z8" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y44z8.c",
  "south" : DIR+"/rooms/x51y42z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
