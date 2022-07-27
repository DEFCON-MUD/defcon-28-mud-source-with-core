inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 20, 4 }));
  set_short( "Passage - x10y20z4" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y20z4.c",
  "east" : DIR+"/rooms/x11y20z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
