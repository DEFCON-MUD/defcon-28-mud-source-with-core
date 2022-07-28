inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 5 }));
  set_short( "Hallway - x61y36z5" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "south" : DIR+"/rooms/x61y35z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
