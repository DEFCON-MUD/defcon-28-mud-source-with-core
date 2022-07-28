inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 16, 8 }));
  set_short( "Corridor - x39y16z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y16z8.c",
  "north" : DIR+"/rooms/x39y17z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
