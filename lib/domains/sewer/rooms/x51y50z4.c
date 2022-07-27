inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 50, 4 }));
  set_short( "Passage - x51y50z4" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y50z4.c",
  "north" : DIR+"/rooms/x51y51z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
