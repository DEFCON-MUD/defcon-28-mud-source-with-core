inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 42, 3 }));
  set_short( "Hallway - x3y42z3" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y42z3.c",
  "south" : DIR+"/rooms/x3y41z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
