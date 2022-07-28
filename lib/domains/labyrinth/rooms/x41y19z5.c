inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 19, 5 }));
  set_short( "Corridor - x41y19z5" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y20z5.c",
  "south" : DIR+"/rooms/x41y18z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
