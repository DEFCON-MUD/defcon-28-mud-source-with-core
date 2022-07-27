inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 58, 7 }));
  set_short( "Passage - x33y58z7" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y58z7.c",
  "north" : DIR+"/rooms/x33y59z7.c",
  "south" : DIR+"/rooms/x33y57z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
