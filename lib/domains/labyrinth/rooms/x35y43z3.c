inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 43, 3 }));
  set_short( "Corridor - x35y43z3" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y44z3.c",
  "south" : DIR+"/rooms/x35y42z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
