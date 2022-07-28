inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 6, 3 }));
  set_short( "Corridor - x9y6z3" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y6z3.c",
  "north" : DIR+"/rooms/x9y7z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
