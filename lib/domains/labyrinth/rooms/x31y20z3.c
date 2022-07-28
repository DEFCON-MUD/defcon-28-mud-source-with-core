inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 3 }));
  set_short( "Corridor - x31y20z3" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y20z3.c",
  "east" : DIR+"/rooms/x32y20z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
