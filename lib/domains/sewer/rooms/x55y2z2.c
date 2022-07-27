inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 2 }));
  set_short( "Corridor - x55y2z2" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z2.c",
  "east" : DIR+"/rooms/x56y2z2.c",
  "north" : DIR+"/rooms/x55y3z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
