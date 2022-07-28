inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 36, 1 }));
  set_short( "Corridor - x5y36z1" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y36z1.c",
  "north" : DIR+"/rooms/x5y37z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
