inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 8, 8 }));
  set_short( "Passage - x51y8z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y8z8.c",
  "east" : DIR+"/rooms/x52y8z8.c",
  "north" : DIR+"/rooms/x51y9z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
