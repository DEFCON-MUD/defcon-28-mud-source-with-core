inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 29, 3 }));
  set_short( "Corridor - x19y29z3" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y30z3.c",
  "south" : DIR+"/rooms/x19y28z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
