inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 41, 0 }));
  set_short( "Hallway - x25y41z0" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y42z0.c",
  "south" : DIR+"/rooms/x25y40z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
