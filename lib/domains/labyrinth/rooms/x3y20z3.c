inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 20, 3 }));
  set_short( "Passage - x3y20z3" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y20z3.c",
  "east" : DIR+"/rooms/x4y20z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
