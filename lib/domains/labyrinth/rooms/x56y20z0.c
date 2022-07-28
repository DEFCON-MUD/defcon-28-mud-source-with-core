inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 20, 0 }));
  set_short( "Corridor - x56y20z0" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y20z0.c",
  "east" : DIR+"/rooms/x57y20z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
