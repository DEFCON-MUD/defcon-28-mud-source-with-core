inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 60, 0 }));
  set_short( "Hallway - x25y60z0" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y60z0.c",
  "north" : DIR+"/rooms/x25y61z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
