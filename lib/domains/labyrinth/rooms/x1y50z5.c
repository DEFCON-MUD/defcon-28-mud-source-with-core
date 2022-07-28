inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 5 }));
  set_short( "Hallway - x1y50z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y50z5.c",
  "north" : DIR+"/rooms/x1y51z5.c",
  "south" : DIR+"/rooms/x1y49z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
