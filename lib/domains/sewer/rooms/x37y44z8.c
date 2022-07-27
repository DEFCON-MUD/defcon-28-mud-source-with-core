inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 44, 8 }));
  set_short( "Hallway - x37y44z8" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y44z8.c",
  "north" : DIR+"/rooms/x37y45z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
