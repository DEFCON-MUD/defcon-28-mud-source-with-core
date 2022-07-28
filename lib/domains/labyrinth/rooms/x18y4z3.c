inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 4, 3 }));
  set_short( "Corridor - x18y4z3" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y4z3.c",
  "east" : DIR+"/rooms/x19y4z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
