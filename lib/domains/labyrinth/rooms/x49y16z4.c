inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 4 }));
  set_short( "Corridor - x49y16z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y16z4.c",
  "east" : DIR+"/rooms/x50y16z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
