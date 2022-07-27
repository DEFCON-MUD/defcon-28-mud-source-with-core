inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 28, 7 }));
  set_short( "Corridor - x20y28z7" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y28z7.c",
  "east" : DIR+"/rooms/x21y28z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
