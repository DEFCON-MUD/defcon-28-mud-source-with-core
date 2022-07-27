inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 2 }));
  set_short( "Corridor - x11y14z2" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y15z2.c",
  "south" : DIR+"/rooms/x11y13z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
