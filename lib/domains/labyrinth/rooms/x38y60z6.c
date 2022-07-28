inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 60, 6 }));
  set_short( "Passage - x38y60z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y60z6.c",
  "east" : DIR+"/rooms/x39y60z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
