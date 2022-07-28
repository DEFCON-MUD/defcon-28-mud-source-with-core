inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 0 }));
  set_short( "Passage - x5y35z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z0.c",
  "south" : DIR+"/rooms/x5y34z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
