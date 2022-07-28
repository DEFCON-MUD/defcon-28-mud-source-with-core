inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 27, 9 }));
  set_short( "Passage - x21y27z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y28z9.c",
  "south" : DIR+"/rooms/x21y26z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
