inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 33, 8 }));
  set_short( "Corridor - x47y33z8" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y34z8.c",
  "south" : DIR+"/rooms/x47y32z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
