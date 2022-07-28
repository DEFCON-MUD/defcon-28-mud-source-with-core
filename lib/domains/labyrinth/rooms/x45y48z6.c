inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 48, 6 }));
  set_short( "Passage - x45y48z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y48z6.c",
  "north" : DIR+"/rooms/x45y49z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
