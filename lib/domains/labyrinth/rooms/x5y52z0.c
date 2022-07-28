inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 52, 0 }));
  set_short( "Corridor - x5y52z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y52z0.c",
  "east" : DIR+"/rooms/x6y52z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
