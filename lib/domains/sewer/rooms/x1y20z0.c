inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 0 }));
  set_short( "Corridor - x1y20z0" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y20z0.c",
  "north" : DIR+"/rooms/x1y21z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
