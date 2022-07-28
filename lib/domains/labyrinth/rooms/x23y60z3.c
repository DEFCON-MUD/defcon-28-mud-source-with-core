inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 3 }));
  set_short( "Corridor - x23y60z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y60z3.c",
  "south" : DIR+"/rooms/x23y59z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
