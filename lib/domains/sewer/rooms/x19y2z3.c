inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 3 }));
  set_short( "Corridor - x19y2z3" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z3.c",
  "east" : DIR+"/rooms/x20y2z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
