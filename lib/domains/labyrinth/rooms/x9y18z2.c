inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 2 }));
  set_short( "Passage - x9y18z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y18z2.c",
  "east" : DIR+"/rooms/x10y18z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
