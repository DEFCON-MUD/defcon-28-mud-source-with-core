inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 39, 3 }));
  set_short( "Corridor - x3y39z3" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y40z3.c",
  "south" : DIR+"/rooms/x3y38z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
