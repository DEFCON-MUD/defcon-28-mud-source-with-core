inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 5 }));
  set_short( "Corridor - x25y16z5" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y16z5.c",
  "north" : DIR+"/rooms/x25y17z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
