inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 0 }));
  set_short( "Hallway - x37y46z0" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y46z0.c",
  "south" : DIR+"/rooms/x37y45z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
