inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 7 }));
  set_short( "Hallway - x21y36z7" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y36z7.c",
  "north" : DIR+"/rooms/x21y37z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
