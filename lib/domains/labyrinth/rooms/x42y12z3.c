inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 12, 3 }));
  set_short( "Hallway - x42y12z3" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y12z3.c",
  "east" : DIR+"/rooms/x43y12z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
