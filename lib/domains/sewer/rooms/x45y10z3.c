inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 3 }));
  set_short( "Hallway - x45y10z3" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y10z3.c",
  "south" : DIR+"/rooms/x45y9z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
