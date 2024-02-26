inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 10, 2 }));
  set_short( "Corridor - x27y10z2" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y11z2.c",
  "south" : DIR+"/rooms/x27y9z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
