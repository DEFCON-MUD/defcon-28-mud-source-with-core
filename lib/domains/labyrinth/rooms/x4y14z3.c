inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 14, 3 }));
  set_short( "Hallway - x4y14z3" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y14z3.c",
  "east" : DIR+"/rooms/x5y14z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
