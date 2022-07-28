inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 3 }));
  set_short( "Corridor - x1y14z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y15z3.c",
  "south" : DIR+"/rooms/x1y13z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
