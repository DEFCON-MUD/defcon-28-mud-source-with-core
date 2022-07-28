inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 30, 2 }));
  set_short( "Passage - x14y30z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y30z2.c",
  "east" : DIR+"/rooms/x15y30z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
