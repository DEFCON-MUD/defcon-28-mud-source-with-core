inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 0 }));
  set_short( "Passage - x41y34z0" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y34z0.c",
  "south" : DIR+"/rooms/x41y33z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
