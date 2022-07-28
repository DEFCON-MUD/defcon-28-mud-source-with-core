inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 9 }));
  set_short( "Corridor - x49y28z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y28z9.c",
  "south" : DIR+"/rooms/x49y27z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
