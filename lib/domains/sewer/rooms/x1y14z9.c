inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 9 }));
  set_short( "Corridor - x1y14z9" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y15z9.c",
  "south" : DIR+"/rooms/x1y13z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
