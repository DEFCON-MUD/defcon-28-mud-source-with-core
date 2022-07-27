inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 22, 4 }));
  set_short( "Passage - x1y22z4" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y22z4.c",
  "south" : DIR+"/rooms/x1y21z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
