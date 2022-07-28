inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 5, 6 }));
  set_short( "Corridor - x43y5z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y6z6.c",
  "south" : DIR+"/rooms/x43y4z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
