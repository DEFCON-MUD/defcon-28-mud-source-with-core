inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 2 }));
  set_short( "Hallway - x51y38z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y38z2.c",
  "east" : DIR+"/rooms/x52y38z2.c",
  "north" : DIR+"/rooms/x51y39z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
