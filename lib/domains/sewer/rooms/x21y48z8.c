inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 48, 8 }));
  set_short( "Corridor - x21y48z8" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y48z8.c",
  "north" : DIR+"/rooms/x21y49z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
