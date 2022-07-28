inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 51, 3 }));
  set_short( "Hallway - x51y51z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y52z3.c",
  "south" : DIR+"/rooms/x51y50z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
