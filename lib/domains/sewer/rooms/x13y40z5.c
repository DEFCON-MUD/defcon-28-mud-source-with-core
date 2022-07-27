inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 5 }));
  set_short( "Corridor - x13y40z5" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z5.c",
  "north" : DIR+"/rooms/x13y41z5.c",
  "south" : DIR+"/rooms/x13y39z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
