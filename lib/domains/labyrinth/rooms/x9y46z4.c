inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 4 }));
  set_short( "Passage - x9y46z4" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y46z4.c",
  "east" : DIR+"/rooms/x10y46z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
