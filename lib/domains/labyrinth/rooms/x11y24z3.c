inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 3 }));
  set_short( "Hallway - x11y24z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y25z3.c",
  "south" : DIR+"/rooms/x11y23z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
