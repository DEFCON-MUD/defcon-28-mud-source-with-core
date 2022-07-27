inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 6 }));
  set_short( "Corridor - x50y0z6" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z6.c",
  "east" : DIR+"/rooms/x51y0z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
