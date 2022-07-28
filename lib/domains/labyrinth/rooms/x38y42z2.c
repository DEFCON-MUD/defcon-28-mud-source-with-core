inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 42, 2 }));
  set_short( "Hallway - x38y42z2" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y42z2.c",
  "east" : DIR+"/rooms/x39y42z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
