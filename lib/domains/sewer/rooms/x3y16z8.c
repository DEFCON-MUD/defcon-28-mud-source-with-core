inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 8 }));
  set_short( "Hallway - x3y16z8" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y16z8.c",
  "south" : DIR+"/rooms/x3y15z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
