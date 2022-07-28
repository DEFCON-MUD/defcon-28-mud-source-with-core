inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 5 }));
  set_short( "Passage - x29y58z5" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y59z5.c",
  "south" : DIR+"/rooms/x29y57z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
