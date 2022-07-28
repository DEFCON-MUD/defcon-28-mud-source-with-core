inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 64, 2 }));
  set_short( "Hallway - x34y64z2" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y64z2.c",
  "east" : DIR+"/rooms/x35y64z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
