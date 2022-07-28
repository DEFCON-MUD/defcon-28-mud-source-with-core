inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 52, 2 }));
  set_short( "Corridor - x21y52z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y52z2.c",
  "north" : DIR+"/rooms/x21y53z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
