inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 4 }));
  set_short( "Corridor - x25y34z4" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y34z4.c",
  "east" : DIR+"/rooms/x26y34z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
