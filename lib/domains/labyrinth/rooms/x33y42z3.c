inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 3 }));
  set_short( "Hallway - x33y42z3" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y42z3.c",
  "north" : DIR+"/rooms/x33y43z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
