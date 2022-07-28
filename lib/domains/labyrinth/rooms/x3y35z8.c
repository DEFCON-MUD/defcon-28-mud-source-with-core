inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 8 }));
  set_short( "Corridor - x3y35z8" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z8.c",
  "south" : DIR+"/rooms/x3y34z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
