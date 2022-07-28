inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 2 }));
  set_short( "Corridor - x45y0z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z2.c",
  "east" : DIR+"/rooms/x46y0z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
