inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 1 }));
  set_short( "Corridor - x35y6z1" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y6z1.c",
  "south" : DIR+"/rooms/x35y5z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
