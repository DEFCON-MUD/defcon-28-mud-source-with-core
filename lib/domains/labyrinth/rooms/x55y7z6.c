inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 7, 6 }));
  set_short( "Corridor - x55y7z6" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y8z6.c",
  "south" : DIR+"/rooms/x55y6z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
