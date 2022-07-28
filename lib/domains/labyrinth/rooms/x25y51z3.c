inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 51, 3 }));
  set_short( "Corridor - x25y51z3" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y52z3.c",
  "south" : DIR+"/rooms/x25y50z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
