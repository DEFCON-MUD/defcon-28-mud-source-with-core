inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 3 }));
  set_short( "Corridor - x1y48z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y48z3.c",
  "north" : DIR+"/rooms/x1y49z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
