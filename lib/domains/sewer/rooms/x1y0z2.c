inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 2 }));
  set_short( "Corridor - x1y0z2" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
