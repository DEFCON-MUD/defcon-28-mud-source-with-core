inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 0 }));
  set_short( "Corridor - x27y4z0" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y4z0.c",
  "east" : DIR+"/rooms/x28y4z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
