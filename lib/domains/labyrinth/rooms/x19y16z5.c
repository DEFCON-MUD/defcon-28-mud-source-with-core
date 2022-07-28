inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 5 }));
  set_short( "Corridor - x19y16z5" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y16z5.c",
  "north" : DIR+"/rooms/x19y17z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
