inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 7 }));
  set_short( "Hallway - x1y36z7" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z7.c",
  "north" : DIR+"/rooms/x1y37z7.c",
  "south" : DIR+"/rooms/x1y35z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
