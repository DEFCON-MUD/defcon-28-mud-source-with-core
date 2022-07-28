inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 4 }));
  set_short( "Corridor - x37y28z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y28z4.c",
  "north" : DIR+"/rooms/x37y29z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
