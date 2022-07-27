inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 3 }));
  set_short( "Hallway - x7y2z3" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y2z3.c",
  "east" : DIR+"/rooms/x8y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
