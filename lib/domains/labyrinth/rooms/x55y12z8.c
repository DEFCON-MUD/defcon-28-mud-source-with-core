inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 12, 8 }));
  set_short( "Passage - x55y12z8" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y13z8.c",
  "south" : DIR+"/rooms/x55y11z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
