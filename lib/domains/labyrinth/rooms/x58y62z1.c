inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 62, 1 }));
  set_short( "Corridor - x58y62z1" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y62z1.c",
  "east" : DIR+"/rooms/x59y62z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
