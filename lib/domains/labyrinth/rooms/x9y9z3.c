inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 9, 3 }));
  set_short( "Corridor - x9y9z3" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y10z3.c",
  "south" : DIR+"/rooms/x9y8z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
