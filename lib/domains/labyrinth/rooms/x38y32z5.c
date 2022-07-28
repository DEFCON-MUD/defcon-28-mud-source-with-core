inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 32, 5 }));
  set_short( "Corridor - x38y32z5" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y32z5.c",
  "east" : DIR+"/rooms/x39y32z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
