inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 1 }));
  set_short( "Passage - x47y32z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y33z1.c",
  "south" : DIR+"/rooms/x47y31z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
