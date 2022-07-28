inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 46, 8 }));
  set_short( "Corridor - x28y46z8" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y46z8.c",
  "east" : DIR+"/rooms/x29y46z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
