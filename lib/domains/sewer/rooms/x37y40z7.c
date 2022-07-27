inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 7 }));
  set_short( "Hallway - x37y40z7" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y40z7.c",
  "north" : DIR+"/rooms/x37y41z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
