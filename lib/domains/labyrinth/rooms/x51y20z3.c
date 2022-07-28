inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 20, 3 }));
  set_short( "Corridor - x51y20z3" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y20z3.c",
  "east" : DIR+"/rooms/x52y20z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
