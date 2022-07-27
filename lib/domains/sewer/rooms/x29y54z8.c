inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 54, 8 }));
  set_short( "Corridor - x29y54z8" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y54z8.c",
  "south" : DIR+"/rooms/x29y53z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
