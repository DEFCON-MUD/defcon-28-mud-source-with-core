inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 2 }));
  set_short( "Corridor - x35y36z2" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y36z2.c",
  "south" : DIR+"/rooms/x35y35z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
