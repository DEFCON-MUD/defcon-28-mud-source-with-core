inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 62, 3 }));
  set_short( "Corridor - x12y62z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y62z3.c",
  "east" : DIR+"/rooms/x13y62z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
