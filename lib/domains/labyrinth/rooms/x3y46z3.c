inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 3 }));
  set_short( "Passage - x3y46z3" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y46z3.c",
  "east" : DIR+"/rooms/x4y46z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
