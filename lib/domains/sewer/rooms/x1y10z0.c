inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 0 }));
  set_short( "Corridor - x1y10z0" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z0.c",
  "south" : DIR+"/rooms/x1y9z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
