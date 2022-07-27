inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 0, 1 }));
  set_short( "Passage - x5y0z1" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y0z1.c",
  "east" : DIR+"/rooms/x6y0z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
