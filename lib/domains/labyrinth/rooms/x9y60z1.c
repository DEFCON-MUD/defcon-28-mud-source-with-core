inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 1 }));
  set_short( "Hallway - x9y60z1" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y60z1.c",
  "east" : DIR+"/rooms/x10y60z1.c",
  "north" : DIR+"/rooms/x9y61z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
