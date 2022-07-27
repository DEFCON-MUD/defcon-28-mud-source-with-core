inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 29, 7 }));
  set_short( "Corridor - x27y29z7" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y30z7.c",
  "south" : DIR+"/rooms/x27y28z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
