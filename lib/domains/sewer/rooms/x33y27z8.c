inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 27, 8 }));
  set_short( "Passage - x33y27z8" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y28z8.c",
  "south" : DIR+"/rooms/x33y26z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
