inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 3 }));
  set_short( "Hallway - x27y34z3" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y35z3.c",
  "south" : DIR+"/rooms/x27y33z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
