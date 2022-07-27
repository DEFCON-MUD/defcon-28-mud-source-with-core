inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 12, 0 }));
  set_short( "Corridor - x9y12z0" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y12z0.c",
  "north" : DIR+"/rooms/x9y13z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
