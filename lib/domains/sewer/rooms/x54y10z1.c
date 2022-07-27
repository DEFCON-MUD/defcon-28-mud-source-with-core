inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 10, 1 }));
  set_short( "Passage - x54y10z1" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y10z1.c",
  "east" : DIR+"/rooms/x55y10z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
