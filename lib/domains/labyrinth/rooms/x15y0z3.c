inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 0, 3 }));
  set_short( "Hallway - x15y0z3" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y0z3.c",
  "east" : DIR+"/rooms/x16y0z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
