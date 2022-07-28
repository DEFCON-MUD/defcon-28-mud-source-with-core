inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 1 }));
  set_short( "Corridor - x11y38z1" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y38z1.c",
  "south" : DIR+"/rooms/x11y37z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
