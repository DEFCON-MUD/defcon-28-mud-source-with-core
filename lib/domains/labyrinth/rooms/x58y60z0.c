inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 60, 0 }));
  set_short( "Corridor - x58y60z0" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y60z0.c",
  "east" : DIR+"/rooms/x59y60z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
