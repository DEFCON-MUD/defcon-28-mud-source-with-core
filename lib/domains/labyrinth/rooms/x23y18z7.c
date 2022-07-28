inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 7 }));
  set_short( "Corridor - x23y18z7" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y18z7.c",
  "north" : DIR+"/rooms/x23y19z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
