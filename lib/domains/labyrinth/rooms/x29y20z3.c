inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 20, 3 }));
  set_short( "Hallway - x29y20z3" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y20z3.c",
  "north" : DIR+"/rooms/x29y21z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
