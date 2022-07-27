inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 6 }));
  set_short( "Corridor - x53y41z6" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z6.c",
  "south" : DIR+"/rooms/x53y40z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
