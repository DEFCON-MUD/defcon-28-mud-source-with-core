inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 40, 2 }));
  set_short( "Hallway - x35y40z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y40z2.c",
  "south" : DIR+"/rooms/x35y39z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
