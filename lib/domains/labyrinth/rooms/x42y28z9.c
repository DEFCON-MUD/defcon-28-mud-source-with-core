inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 28, 9 }));
  set_short( "Passage - x42y28z9" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y28z9.c",
  "east" : DIR+"/rooms/x43y28z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
