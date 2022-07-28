inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 4 }));
  set_short( "Hallway - x1y18z4" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y19z4.c",
  "south" : DIR+"/rooms/x1y17z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
