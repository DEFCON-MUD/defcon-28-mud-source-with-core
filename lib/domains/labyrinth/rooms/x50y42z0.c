inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 42, 0 }));
  set_short( "Corridor - x50y42z0" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y42z0.c",
  "east" : DIR+"/rooms/x51y42z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
