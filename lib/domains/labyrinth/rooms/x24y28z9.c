inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 28, 9 }));
  set_short( "Hallway - x24y28z9" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y28z9.c",
  "east" : DIR+"/rooms/x25y28z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
