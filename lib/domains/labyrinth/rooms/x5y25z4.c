inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 25, 4 }));
  set_short( "Passage - x5y25z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y26z4.c",
  "south" : DIR+"/rooms/x5y24z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
