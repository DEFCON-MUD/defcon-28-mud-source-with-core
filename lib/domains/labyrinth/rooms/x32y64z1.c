inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 64, 1 }));
  set_short( "Corridor - x32y64z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y64z1.c",
  "east" : DIR+"/rooms/x33y64z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
