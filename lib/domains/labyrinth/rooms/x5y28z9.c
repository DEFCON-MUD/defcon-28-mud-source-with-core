inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 9 }));
  set_short( "Passage - x5y28z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y28z9.c",
  "north" : DIR+"/rooms/x5y29z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
