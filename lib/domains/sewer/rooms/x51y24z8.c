inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 8 }));
  set_short( "Hallway - x51y24z8" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y24z8.c",
  "north" : DIR+"/rooms/x51y25z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
