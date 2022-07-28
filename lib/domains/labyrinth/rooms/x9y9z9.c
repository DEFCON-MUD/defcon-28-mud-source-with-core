inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 9, 9 }));
  set_short( "Hallway - x9y9z9" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y10z9.c",
  "south" : DIR+"/rooms/x9y8z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
