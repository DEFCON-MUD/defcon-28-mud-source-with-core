inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 28, 6 }));
  set_short( "Passage - x52y28z6" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y28z6.c",
  "east" : DIR+"/rooms/x53y28z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
