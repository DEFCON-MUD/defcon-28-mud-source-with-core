inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 0 }));
  set_short( "Corridor - x1y38z0" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y38z0.c",
  "south" : DIR+"/rooms/x1y37z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
