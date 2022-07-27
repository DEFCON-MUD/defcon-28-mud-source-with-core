inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 46, 5 }));
  set_short( "Hallway - x41y46z5" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y46z5.c",
  "north" : DIR+"/rooms/x41y47z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
