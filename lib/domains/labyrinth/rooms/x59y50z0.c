inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 0 }));
  set_short( "Corridor - x59y50z0" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y50z0.c",
  "north" : DIR+"/rooms/x59y51z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
