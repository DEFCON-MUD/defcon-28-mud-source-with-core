inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 20, 7 }));
  set_short( "Passage - x16y20z7" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y20z7.c",
  "east" : DIR+"/rooms/x17y20z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
