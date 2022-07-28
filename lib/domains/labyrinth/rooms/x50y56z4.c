inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 56, 4 }));
  set_short( "Corridor - x50y56z4" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y56z4.c",
  "east" : DIR+"/rooms/x51y56z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
