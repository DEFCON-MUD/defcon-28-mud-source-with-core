inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 60, 0 }));
  set_short( "Passage - x61y60z0" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y60z0.c",
  "south" : DIR+"/rooms/x61y59z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
