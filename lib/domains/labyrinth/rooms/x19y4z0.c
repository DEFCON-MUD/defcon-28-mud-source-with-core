inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 4, 0 }));
  set_short( "Corridor - x19y4z0" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y4z0.c",
  "east" : DIR+"/rooms/x20y4z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
