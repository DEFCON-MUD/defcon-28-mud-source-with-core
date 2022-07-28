inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 2 }));
  set_short( "Corridor - x61y38z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y39z2.c",
  "south" : DIR+"/rooms/x61y37z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
