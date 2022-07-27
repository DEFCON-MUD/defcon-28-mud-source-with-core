inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 8 }));
  set_short( "Hallway - x49y34z8" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y34z8.c",
  "north" : DIR+"/rooms/x49y35z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
