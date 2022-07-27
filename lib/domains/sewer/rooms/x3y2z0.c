inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 2, 0 }));
  set_short( "Passage - x3y2z0" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y2z0.c",
  "north" : DIR+"/rooms/x3y3z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
