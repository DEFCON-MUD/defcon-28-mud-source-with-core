inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 9 }));
  set_short( "Corridor - x1y38z9" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z9.c",
  "north" : DIR+"/rooms/x1y39z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
