inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 0 }));
  set_short( "Passage - x5y42z0" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y42z0.c",
  "north" : DIR+"/rooms/x5y43z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
