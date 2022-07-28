inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 9 }));
  set_short( "Corridor - x27y40z9" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y40z9.c",
  "east" : DIR+"/rooms/x28y40z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
