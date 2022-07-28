inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 9, 1 }));
  set_short( "Hallway - x11y9z1" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y10z1.c",
  "south" : DIR+"/rooms/x11y8z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
