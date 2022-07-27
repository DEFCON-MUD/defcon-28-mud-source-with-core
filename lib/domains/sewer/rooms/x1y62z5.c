inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 5 }));
  set_short( "Passage - x1y62z5" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z5.c",
  "south" : DIR+"/rooms/x1y61z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
