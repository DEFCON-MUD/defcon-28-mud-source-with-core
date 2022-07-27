inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 0, 5 }));
  set_short( "Passage - x48y0z5" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y0z5.c",
  "east" : DIR+"/rooms/x49y0z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
