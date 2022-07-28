inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 4, 0 }));
  set_short( "Hallway - x7y4z0" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y4z0.c",
  "east" : DIR+"/rooms/x8y4z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
