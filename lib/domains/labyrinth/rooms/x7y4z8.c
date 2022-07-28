inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 8 }));
  set_short( "Corridor - x7y4z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z8.c",
  "east" : DIR+"/rooms/x8y4z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
