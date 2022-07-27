inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 20, 7 }));
  set_short( "Passage - x18y20z7" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y20z7.c",
  "east" : DIR+"/rooms/x19y20z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
