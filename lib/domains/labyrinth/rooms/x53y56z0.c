inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 0 }));
  set_short( "Corridor - x53y56z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y56z0.c",
  "south" : DIR+"/rooms/x53y55z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
