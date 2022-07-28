inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 1 }));
  set_short( "Passage - x55y34z1" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y34z1.c",
  "north" : DIR+"/rooms/x55y35z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
