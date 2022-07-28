inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 4 }));
  set_short( "Hallway - x25y38z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y38z4.c",
  "north" : DIR+"/rooms/x25y39z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
