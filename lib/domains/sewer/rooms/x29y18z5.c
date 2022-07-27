inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 5 }));
  set_short( "Corridor - x29y18z5" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
