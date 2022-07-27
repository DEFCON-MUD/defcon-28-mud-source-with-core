inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 31, 9 }));
  set_short( "Hallway - x47y31z9" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y32z9.c",
  "south" : DIR+"/rooms/x47y30z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
