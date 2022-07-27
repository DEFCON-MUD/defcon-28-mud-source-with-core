inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 6 }));
  set_short( "Passage - x33y2z6" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y2z6.c",
  "north" : DIR+"/rooms/x33y3z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
