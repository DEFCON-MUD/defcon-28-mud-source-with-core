inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 5 }));
  set_short( "Hallway - x37y38z5" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y38z5.c",
  "east" : DIR+"/rooms/x38y38z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
