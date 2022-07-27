inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 7 }));
  set_short( "Hallway - x49y28z7" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y28z7.c",
  "south" : DIR+"/rooms/x49y27z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
