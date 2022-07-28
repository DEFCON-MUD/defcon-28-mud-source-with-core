inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 43, 5 }));
  set_short( "Corridor - x11y43z5" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y44z5.c",
  "south" : DIR+"/rooms/x11y42z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
