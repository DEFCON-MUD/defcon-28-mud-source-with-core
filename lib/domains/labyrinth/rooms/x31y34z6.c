inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 34, 6 }));
  set_short( "Hallway - x31y34z6" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y35z6.c",
  "south" : DIR+"/rooms/x31y33z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
