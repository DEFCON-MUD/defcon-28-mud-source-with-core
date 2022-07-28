inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 0 }));
  set_short( "Corridor - x5y38z0" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y39z0.c",
  "south" : DIR+"/rooms/x5y37z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
