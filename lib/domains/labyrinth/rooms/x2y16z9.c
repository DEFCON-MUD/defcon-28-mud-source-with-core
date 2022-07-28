inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 16, 9 }));
  set_short( "Corridor - x2y16z9" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y16z9.c",
  "east" : DIR+"/rooms/x3y16z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
