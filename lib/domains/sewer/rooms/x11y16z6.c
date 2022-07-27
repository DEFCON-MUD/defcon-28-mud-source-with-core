inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 6 }));
  set_short( "Passage - x11y16z6" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y16z6.c",
  "north" : DIR+"/rooms/x11y17z6.c",
  "south" : DIR+"/rooms/x11y15z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
