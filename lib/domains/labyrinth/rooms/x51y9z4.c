inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 4 }));
  set_short( "Passage - x51y9z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z4.c",
  "south" : DIR+"/rooms/x51y8z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
