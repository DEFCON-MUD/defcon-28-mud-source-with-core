inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 58, 3 }));
  set_short( "Corridor - x46y58z3" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y58z3.c",
  "east" : DIR+"/rooms/x47y58z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
