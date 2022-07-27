inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 0 }));
  set_short( "Corridor - x25y42z0" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y42z0.c",
  "south" : DIR+"/rooms/x25y41z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
