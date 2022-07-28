inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 4, 1 }));
  set_short( "Corridor - x8y4z1" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y4z1.c",
  "east" : DIR+"/rooms/x9y4z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
