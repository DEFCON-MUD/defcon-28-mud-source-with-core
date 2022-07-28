inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 4 }));
  set_short( "Hallway - x35y12z4" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y12z4.c",
  "east" : DIR+"/rooms/x36y12z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
