inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 2 }));
  set_short( "Corridor - x29y16z2" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y17z2.c",
  "south" : DIR+"/rooms/x29y15z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
