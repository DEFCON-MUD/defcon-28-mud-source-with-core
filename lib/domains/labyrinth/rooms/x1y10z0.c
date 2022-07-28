inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 0 }));
  set_short( "Corridor - x1y10z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z0.c",
  "south" : DIR+"/rooms/x1y9z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
