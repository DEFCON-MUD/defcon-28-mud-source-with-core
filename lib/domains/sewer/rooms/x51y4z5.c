inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 4, 5 }));
  set_short( "Passage - x51y4z5" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y4z5.c",
  "north" : DIR+"/rooms/x51y5z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
