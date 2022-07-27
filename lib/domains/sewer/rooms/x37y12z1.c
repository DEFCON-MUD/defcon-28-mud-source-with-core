inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 1 }));
  set_short( "Passage - x37y12z1" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y12z1.c",
  "north" : DIR+"/rooms/x37y13z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
