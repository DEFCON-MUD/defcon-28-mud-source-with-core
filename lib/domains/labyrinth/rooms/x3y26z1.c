inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 1 }));
  set_short( "Corridor - x3y26z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y26z1.c",
  "north" : DIR+"/rooms/x3y27z1.c",
  "south" : DIR+"/rooms/x3y25z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
