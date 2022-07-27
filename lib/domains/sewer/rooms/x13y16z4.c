inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 4 }));
  set_short( "Hallway - x13y16z4" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y16z4.c",
  "south" : DIR+"/rooms/x13y15z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
