inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 6 }));
  set_short( "Passage - x29y58z6" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y58z6.c",
  "north" : DIR+"/rooms/x29y59z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
