inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 29, 3 }));
  set_short( "Corridor - x27y29z3" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y30z3.c",
  "south" : DIR+"/rooms/x27y28z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
