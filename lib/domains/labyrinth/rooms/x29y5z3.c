inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 5, 3 }));
  set_short( "Corridor - x29y5z3" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y6z3.c",
  "south" : DIR+"/rooms/x29y4z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
