inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 32, 7 }));
  set_short( "Corridor - x35y32z7" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y32z7.c",
  "north" : DIR+"/rooms/x35y33z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
