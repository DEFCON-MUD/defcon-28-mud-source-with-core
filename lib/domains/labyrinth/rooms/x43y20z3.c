inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 3 }));
  set_short( "Corridor - x43y20z3" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y20z3.c",
  "east" : DIR+"/rooms/x44y20z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
