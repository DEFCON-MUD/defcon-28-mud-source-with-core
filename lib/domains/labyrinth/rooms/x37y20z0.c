inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 0 }));
  set_short( "Passage - x37y20z0" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y20z0.c",
  "east" : DIR+"/rooms/x38y20z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
