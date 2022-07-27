inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 0 }));
  set_short( "Hallway - x45y40z0" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y41z0.c",
  "south" : DIR+"/rooms/x45y39z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
