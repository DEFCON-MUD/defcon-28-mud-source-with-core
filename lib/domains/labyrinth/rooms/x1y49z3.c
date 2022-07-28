inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 49, 3 }));
  set_short( "Corridor - x1y49z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y50z3.c",
  "south" : DIR+"/rooms/x1y48z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
