inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 1 }));
  set_short( "Hallway - x31y20z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y20z1.c",
  "north" : DIR+"/rooms/x31y21z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
