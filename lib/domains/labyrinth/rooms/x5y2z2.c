inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 2, 2 }));
  set_short( "Corridor - x5y2z2" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y2z2.c",
  "north" : DIR+"/rooms/x5y3z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
