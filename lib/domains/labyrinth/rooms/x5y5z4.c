inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 5, 4 }));
  set_short( "Hallway - x5y5z4" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y6z4.c",
  "south" : DIR+"/rooms/x5y4z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
