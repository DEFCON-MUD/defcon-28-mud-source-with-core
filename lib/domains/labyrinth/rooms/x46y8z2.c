inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 8, 2 }));
  set_short( "Corridor - x46y8z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y8z2.c",
  "east" : DIR+"/rooms/x47y8z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
