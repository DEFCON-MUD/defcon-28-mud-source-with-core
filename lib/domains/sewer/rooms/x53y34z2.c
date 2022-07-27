inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 2 }));
  set_short( "Corridor - x53y34z2" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z2.c",
  "north" : DIR+"/rooms/x53y35z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
