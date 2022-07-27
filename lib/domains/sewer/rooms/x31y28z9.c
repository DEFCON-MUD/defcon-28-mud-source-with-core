inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 28, 9 }));
  set_short( "Hallway - x31y28z9" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y28z9.c",
  "south" : DIR+"/rooms/x31y27z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
