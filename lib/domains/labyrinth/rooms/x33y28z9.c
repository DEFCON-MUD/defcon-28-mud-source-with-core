inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 28, 9 }));
  set_short( "Hallway - x33y28z9" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y28z9.c",
  "north" : DIR+"/rooms/x33y29z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
