inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 6 }));
  set_short( "Hallway - x7y34z6" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y34z6.c",
  "north" : DIR+"/rooms/x7y35z6.c",
  "south" : DIR+"/rooms/x7y33z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
