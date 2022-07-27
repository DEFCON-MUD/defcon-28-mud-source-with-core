inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 5 }));
  set_short( "Hallway - x19y30z5" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z5.c",
  "north" : DIR+"/rooms/x19y31z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
