inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 64, 3 }));
  set_short( "Passage - x35y64z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y64z3.c",
  "east" : DIR+"/rooms/x36y64z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
