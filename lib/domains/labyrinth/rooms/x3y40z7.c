inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 7 }));
  set_short( "Hallway - x3y40z7" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y41z7.c",
  "south" : DIR+"/rooms/x3y39z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
