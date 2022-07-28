inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 58, 5 }));
  set_short( "Corridor - x53y58z5" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y58z5.c",
  "east" : DIR+"/rooms/x54y58z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
