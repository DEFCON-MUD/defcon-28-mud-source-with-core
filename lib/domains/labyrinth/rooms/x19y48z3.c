inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 3 }));
  set_short( "Corridor - x19y48z3" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y49z3.c",
  "south" : DIR+"/rooms/x19y47z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
