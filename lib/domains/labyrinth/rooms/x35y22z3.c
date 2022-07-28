inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 22, 3 }));
  set_short( "Corridor - x35y22z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y22z3.c",
  "south" : DIR+"/rooms/x35y21z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
