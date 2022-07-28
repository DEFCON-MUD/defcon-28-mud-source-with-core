inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 2, 3 }));
  set_short( "Corridor - x51y2z3" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y2z3.c",
  "east" : DIR+"/rooms/x52y2z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
