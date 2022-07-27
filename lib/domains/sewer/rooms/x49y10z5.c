inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 5 }));
  set_short( "Hallway - x49y10z5" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y10z5.c",
  "north" : DIR+"/rooms/x49y11z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
