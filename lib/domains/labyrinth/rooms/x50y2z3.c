inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 2, 3 }));
  set_short( "Passage - x50y2z3" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y2z3.c",
  "east" : DIR+"/rooms/x51y2z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
