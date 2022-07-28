inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 45, 2 }));
  set_short( "Hallway - x39y45z2" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y46z2.c",
  "south" : DIR+"/rooms/x39y44z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
