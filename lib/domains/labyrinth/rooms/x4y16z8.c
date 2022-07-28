inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 16, 8 }));
  set_short( "Hallway - x4y16z8" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y16z8.c",
  "east" : DIR+"/rooms/x5y16z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
