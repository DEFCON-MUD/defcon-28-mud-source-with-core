inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 30, 2 }));
  set_short( "Passage - x51y30z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y30z2.c",
  "east" : DIR+"/rooms/x52y30z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
