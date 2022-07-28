inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 0 }));
  set_short( "Passage - x9y4z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y4z0.c",
  "east" : DIR+"/rooms/x10y4z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
