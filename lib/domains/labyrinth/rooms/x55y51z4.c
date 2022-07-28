inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 51, 4 }));
  set_short( "Corridor - x55y51z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y52z4.c",
  "south" : DIR+"/rooms/x55y50z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
