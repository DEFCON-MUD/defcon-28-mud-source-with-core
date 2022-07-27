inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 18, 1 }));
  set_short( "Corridor - x6y18z1" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y18z1.c",
  "east" : DIR+"/rooms/x7y18z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
