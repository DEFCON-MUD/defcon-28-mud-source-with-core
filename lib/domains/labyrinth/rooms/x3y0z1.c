inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 1 }));
  set_short( "Hallway - x3y0z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z1.c",
  "east" : DIR+"/rooms/x4y0z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
