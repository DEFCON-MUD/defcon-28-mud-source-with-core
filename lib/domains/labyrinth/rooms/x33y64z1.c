inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 64, 1 }));
  set_short( "Hallway - x33y64z1" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y64z1.c",
  "east" : DIR+"/rooms/x34y64z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
