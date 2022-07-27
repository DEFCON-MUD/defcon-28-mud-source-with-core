inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 0 }));
  set_short( "Passage - x7y58z0" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y58z0.c",
  "north" : DIR+"/rooms/x7y59z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
