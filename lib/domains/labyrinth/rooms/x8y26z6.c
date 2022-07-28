inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 26, 6 }));
  set_short( "Passage - x8y26z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y26z6.c",
  "east" : DIR+"/rooms/x9y26z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
