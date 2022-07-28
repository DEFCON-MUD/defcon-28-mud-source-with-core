inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 3 }));
  set_short( "Hallway - x23y38z3" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y39z3.c",
  "south" : DIR+"/rooms/x23y37z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
