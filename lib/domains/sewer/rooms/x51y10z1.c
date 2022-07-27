inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 1 }));
  set_short( "Passage - x51y10z1" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y10z1.c",
  "north" : DIR+"/rooms/x51y11z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
