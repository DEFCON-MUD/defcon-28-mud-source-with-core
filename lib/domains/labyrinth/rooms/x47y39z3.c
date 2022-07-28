inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 39, 3 }));
  set_short( "Corridor - x47y39z3" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y40z3.c",
  "south" : DIR+"/rooms/x47y38z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
