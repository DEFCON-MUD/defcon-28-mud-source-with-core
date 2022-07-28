inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 27, 6 }));
  set_short( "Passage - x35y27z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y28z6.c",
  "south" : DIR+"/rooms/x35y26z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
