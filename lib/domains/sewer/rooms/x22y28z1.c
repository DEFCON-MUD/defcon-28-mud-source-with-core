inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 28, 1 }));
  set_short( "Passage - x22y28z1" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y28z1.c",
  "east" : DIR+"/rooms/x23y28z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
