inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 3 }));
  set_short( "Corridor - x41y54z3" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y54z3.c",
  "north" : DIR+"/rooms/x41y55z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
