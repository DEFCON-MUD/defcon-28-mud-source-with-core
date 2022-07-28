inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 1 }));
  set_short( "Passage - x37y56z1" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y56z1.c",
  "east" : DIR+"/rooms/x38y56z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
