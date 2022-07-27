inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 8 }));
  set_short( "Corridor - x47y28z8" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y29z8.c",
  "south" : DIR+"/rooms/x47y27z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
