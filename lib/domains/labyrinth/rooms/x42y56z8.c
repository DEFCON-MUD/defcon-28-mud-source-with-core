inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 56, 8 }));
  set_short( "Passage - x42y56z8" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y56z8.c",
  "east" : DIR+"/rooms/x43y56z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
