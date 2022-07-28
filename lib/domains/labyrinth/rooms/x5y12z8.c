inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 12, 8 }));
  set_short( "Hallway - x5y12z8" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y12z8.c",
  "south" : DIR+"/rooms/x5y11z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
