inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 46, 0 }));
  set_short( "Corridor - x31y46z0" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y46z0.c",
  "north" : DIR+"/rooms/x31y47z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
