inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 3 }));
  set_short( "Corridor - x11y8z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y8z3.c",
  "south" : DIR+"/rooms/x11y7z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
