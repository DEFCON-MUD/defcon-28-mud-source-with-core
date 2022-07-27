inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 20, 0 }));
  set_short( "Passage - x22y20z0" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y20z0.c",
  "east" : DIR+"/rooms/x23y20z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
