inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 9 }));
  set_short( "Passage - x3y64z9" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z9.c",
  "east" : DIR+"/rooms/x4y64z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
