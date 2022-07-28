inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 22, 3 }));
  set_short( "Corridor - x46y22z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y22z3.c",
  "east" : DIR+"/rooms/x47y22z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
