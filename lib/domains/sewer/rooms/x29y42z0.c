inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 0 }));
  set_short( "Hallway - x29y42z0" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y42z0.c",
  "south" : DIR+"/rooms/x29y41z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
