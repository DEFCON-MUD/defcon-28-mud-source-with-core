inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 12, 9 }));
  set_short( "Hallway - x5y12z9" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y12z9.c",
  "north" : DIR+"/rooms/x5y13z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
