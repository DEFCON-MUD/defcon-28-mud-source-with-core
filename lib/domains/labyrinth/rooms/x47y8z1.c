inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 8, 1 }));
  set_short( "Corridor - x47y8z1" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y8z1.c",
  "north" : DIR+"/rooms/x47y9z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
