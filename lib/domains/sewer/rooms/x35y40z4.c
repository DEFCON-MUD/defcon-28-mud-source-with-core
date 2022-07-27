inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 4 }));
  set_short( "Corridor - x35y40z4" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y40z4.c",
  "north" : DIR+"/rooms/x35y41z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
