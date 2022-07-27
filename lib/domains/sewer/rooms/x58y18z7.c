inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 18, 7 }));
  set_short( "Passage - x58y18z7" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y18z7.c",
  "east" : DIR+"/rooms/x59y18z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
