inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 9 }));
  set_short( "Corridor - x1y42z9" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z9.c",
  "south" : DIR+"/rooms/x1y41z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
