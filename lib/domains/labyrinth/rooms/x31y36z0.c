inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 0 }));
  set_short( "Corridor - x31y36z0" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y37z0.c",
  "south" : DIR+"/rooms/x31y35z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
