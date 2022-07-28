inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 1 }));
  set_short( "Passage - x45y12z1" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y13z1.c",
  "south" : DIR+"/rooms/x45y11z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
