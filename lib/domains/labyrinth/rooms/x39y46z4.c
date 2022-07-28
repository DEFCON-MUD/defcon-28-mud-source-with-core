inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 46, 4 }));
  set_short( "Corridor - x39y46z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y46z4.c",
  "south" : DIR+"/rooms/x39y45z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
