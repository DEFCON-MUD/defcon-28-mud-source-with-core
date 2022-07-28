inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 3 }));
  set_short( "Corridor - x13y5z3" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z3.c",
  "south" : DIR+"/rooms/x13y4z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
