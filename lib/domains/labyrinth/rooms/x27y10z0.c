inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 10, 0 }));
  set_short( "Corridor - x27y10z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y11z0.c",
  "south" : DIR+"/rooms/x27y9z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
