inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 3 }));
  set_short( "Passage - x5y42z3" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y42z3.c",
  "south" : DIR+"/rooms/x5y41z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
