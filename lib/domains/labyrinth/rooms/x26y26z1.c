inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 26, 1 }));
  set_short( "Hallway - x26y26z1" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y26z1.c",
  "east" : DIR+"/rooms/x27y26z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
