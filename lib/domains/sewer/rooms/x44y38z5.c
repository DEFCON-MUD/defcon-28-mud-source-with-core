inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 38, 5 }));
  set_short( "Passage - x44y38z5" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y38z5.c",
  "east" : DIR+"/rooms/x45y38z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
