inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 29, 7 }));
  set_short( "Corridor - x21y29z7" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y30z7.c",
  "south" : DIR+"/rooms/x21y28z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
