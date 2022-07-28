inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 8 }));
  set_short( "Hallway - x59y50z8" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y50z8.c",
  "south" : DIR+"/rooms/x59y49z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
