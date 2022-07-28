inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 60, 3 }));
  set_short( "Corridor - x28y60z3" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y60z3.c",
  "east" : DIR+"/rooms/x29y60z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
