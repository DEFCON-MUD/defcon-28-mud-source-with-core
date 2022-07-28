inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 3 }));
  set_short( "Hallway - x39y34z3" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y34z3.c",
  "north" : DIR+"/rooms/x39y35z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
