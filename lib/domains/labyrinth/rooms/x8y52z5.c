inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 52, 5 }));
  set_short( "Hallway - x8y52z5" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y52z5.c",
  "east" : DIR+"/rooms/x9y52z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
