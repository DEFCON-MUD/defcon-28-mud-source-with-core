inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 0 }));
  set_short( "Hallway - x5y62z0" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z0.c",
  "east" : DIR+"/rooms/x6y62z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
