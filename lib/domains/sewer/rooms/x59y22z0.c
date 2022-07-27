inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 0 }));
  set_short( "Passage - x59y22z0" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y22z0.c",
  "east" : DIR+"/rooms/x60y22z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
