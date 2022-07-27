inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 1 }));
  set_short( "Corridor - x1y48z1" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y48z1.c",
  "south" : DIR+"/rooms/x1y47z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
