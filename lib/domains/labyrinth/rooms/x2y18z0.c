inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 18, 0 }));
  set_short( "Corridor - x2y18z0" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y18z0.c",
  "east" : DIR+"/rooms/x3y18z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
