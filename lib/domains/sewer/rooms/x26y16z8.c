inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 16, 8 }));
  set_short( "Corridor - x26y16z8" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y16z8.c",
  "east" : DIR+"/rooms/x27y16z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
