inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 47, 6 }));
  set_short( "Corridor - x39y47z6" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y48z6.c",
  "south" : DIR+"/rooms/x39y46z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
