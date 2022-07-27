inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 2 }));
  set_short( "Corridor - x57y18z2" );
set_objects( DIR+"/monsters/poledaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y18z2.c",
  "south" : DIR+"/rooms/x57y17z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
