inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 5 }));
  set_short( "Corridor - x37y14z5" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y14z5.c",
  "north" : DIR+"/rooms/x37y15z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
