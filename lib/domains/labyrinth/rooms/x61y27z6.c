inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 27, 6 }));
  set_short( "Corridor - x61y27z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y28z6.c",
  "south" : DIR+"/rooms/x61y26z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
