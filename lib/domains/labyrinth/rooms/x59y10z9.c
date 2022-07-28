inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 10, 9 }));
  set_short( "Corridor - x59y10z9" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y11z9.c",
  "south" : DIR+"/rooms/x59y9z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
