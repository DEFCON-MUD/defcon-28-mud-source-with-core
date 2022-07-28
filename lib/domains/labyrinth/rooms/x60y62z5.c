inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 62, 5 }));
  set_short( "Hallway - x60y62z5" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y62z5.c",
  "east" : DIR+"/rooms/x61y62z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
