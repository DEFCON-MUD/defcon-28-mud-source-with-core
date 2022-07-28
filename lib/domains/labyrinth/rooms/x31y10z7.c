inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 7 }));
  set_short( "Passage - x31y10z7" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y10z7.c",
  "south" : DIR+"/rooms/x31y9z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
