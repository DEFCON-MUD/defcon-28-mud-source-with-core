inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 26, 3 }));
  set_short( "Hallway - x38y26z3" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y26z3.c",
  "east" : DIR+"/rooms/x39y26z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
