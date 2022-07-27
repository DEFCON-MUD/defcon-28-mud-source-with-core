inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 28, 7 }));
  set_short( "Hallway - x28y28z7" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y28z7.c",
  "east" : DIR+"/rooms/x29y28z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
