inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 2 }));
  set_short( "Corridor - x25y50z2" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y50z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
