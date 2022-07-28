inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 5 }));
  set_short( "Corridor - x29y10z5" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y10z5.c",
  "north" : DIR+"/rooms/x29y11z5.c",
  "south" : DIR+"/rooms/x29y9z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
