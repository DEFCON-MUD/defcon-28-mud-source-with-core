inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 38, 2 }));
  set_short( "Passage - x30y38z2" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y38z2.c",
  "east" : DIR+"/rooms/x31y38z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
