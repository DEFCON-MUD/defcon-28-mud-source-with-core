inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 18, 8 }));
  set_short( "Hallway - x34y18z8" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y18z8.c",
  "east" : DIR+"/rooms/x35y18z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
