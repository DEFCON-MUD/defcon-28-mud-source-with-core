inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 26, 3 }));
  set_short( "Corridor - x40y26z3" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y26z3.c",
  "east" : DIR+"/rooms/x41y26z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
