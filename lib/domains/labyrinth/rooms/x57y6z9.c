inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 9 }));
  set_short( "Hallway - x57y6z9" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y6z9.c",
  "east" : DIR+"/rooms/x58y6z9.c",
  "north" : DIR+"/rooms/x57y7z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
