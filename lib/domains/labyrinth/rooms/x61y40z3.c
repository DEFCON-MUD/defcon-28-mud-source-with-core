inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 3 }));
  set_short( "Passage - x61y40z3" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y40z3.c",
  "south" : DIR+"/rooms/x61y39z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
