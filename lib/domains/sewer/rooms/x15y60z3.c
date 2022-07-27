inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 60, 3 }));
  set_short( "Passage - x15y60z3" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y60z3.c",
  "east" : DIR+"/rooms/x16y60z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
