inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 34, 3 }));
  set_short( "Corridor - x60y34z3" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y34z3.c",
  "east" : DIR+"/rooms/x61y34z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
