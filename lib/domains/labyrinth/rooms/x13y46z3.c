inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 3 }));
  set_short( "Passage - x13y46z3" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y47z3.c",
  "south" : DIR+"/rooms/x13y45z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
