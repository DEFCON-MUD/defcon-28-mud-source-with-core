inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 41, 5 }));
  set_short( "Hallway - x3y41z5" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y42z5.c",
  "south" : DIR+"/rooms/x3y40z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
