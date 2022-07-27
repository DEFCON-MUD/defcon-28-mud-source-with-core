inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 33, 0 }));
  set_short( "Passage - x41y33z0" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y34z0.c",
  "south" : DIR+"/rooms/x41y32z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
