inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 28, 2 }));
  set_short( "Hallway - x51y28z2" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y28z2.c",
  "south" : DIR+"/rooms/x51y27z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
