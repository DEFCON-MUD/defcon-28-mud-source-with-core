inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 1 }));
  set_short( "Passage - x55y60z1" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y60z1.c",
  "south" : DIR+"/rooms/x55y59z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
