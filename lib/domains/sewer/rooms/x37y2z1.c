inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 1 }));
  set_short( "Corridor - x37y2z1" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y2z1.c",
  "north" : DIR+"/rooms/x37y3z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
