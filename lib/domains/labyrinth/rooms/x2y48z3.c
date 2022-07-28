inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 48, 3 }));
  set_short( "Hallway - x2y48z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y48z3.c",
  "east" : DIR+"/rooms/x3y48z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
