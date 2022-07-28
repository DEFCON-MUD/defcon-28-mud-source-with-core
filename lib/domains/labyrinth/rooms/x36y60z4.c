inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 60, 4 }));
  set_short( "Corridor - x36y60z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y60z4.c",
  "east" : DIR+"/rooms/x37y60z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
