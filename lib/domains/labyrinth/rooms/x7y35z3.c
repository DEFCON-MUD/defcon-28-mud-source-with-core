inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 35, 3 }));
  set_short( "Corridor - x7y35z3" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y36z3.c",
  "south" : DIR+"/rooms/x7y34z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
