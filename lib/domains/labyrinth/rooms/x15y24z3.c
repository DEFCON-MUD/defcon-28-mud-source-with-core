inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 3 }));
  set_short( "Passage - x15y24z3" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y25z3.c",
  "south" : DIR+"/rooms/x15y23z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
