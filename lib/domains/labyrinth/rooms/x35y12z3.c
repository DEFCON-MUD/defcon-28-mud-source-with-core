inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 12, 3 }));
  set_short( "Hallway - x35y12z3" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y13z3.c",
  "south" : DIR+"/rooms/x35y11z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
