inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 6, 8 }));
  set_short( "Hallway - x1y6z8" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y6z8.c",
  "north" : DIR+"/rooms/x1y7z8.c",
  "south" : DIR+"/rooms/x1y5z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
