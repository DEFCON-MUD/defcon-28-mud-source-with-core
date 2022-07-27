inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 31, 5 }));
  set_short( "Corridor - x1y31z5" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y32z5.c",
  "south" : DIR+"/rooms/x1y30z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
