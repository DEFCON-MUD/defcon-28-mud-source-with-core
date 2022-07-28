inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 42, 4 }));
  set_short( "Corridor - x8y42z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y42z4.c",
  "east" : DIR+"/rooms/x9y42z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
