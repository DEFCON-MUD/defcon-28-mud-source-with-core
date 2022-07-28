inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 2 }));
  set_short( "Corridor - x9y60z2" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z2.c",
  "south" : DIR+"/rooms/x9y59z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
