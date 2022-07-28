inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 18, 4 }));
  set_short( "Passage - x12y18z4" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y18z4.c",
  "east" : DIR+"/rooms/x13y18z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
