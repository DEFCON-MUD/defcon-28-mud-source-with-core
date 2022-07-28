inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 5 }));
  set_short( "Corridor - x15y42z5" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y42z5.c",
  "south" : DIR+"/rooms/x15y41z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
