inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 26, 9 }));
  set_short( "Hallway - x25y26z9" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y27z9.c",
  "south" : DIR+"/rooms/x25y25z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
