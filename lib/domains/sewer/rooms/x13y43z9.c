inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 43, 9 }));
  set_short( "Corridor - x13y43z9" );
set_objects( DIR+"/monsters/bouer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y44z9.c",
  "south" : DIR+"/rooms/x13y42z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
