inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 64, 3 }));
  set_short( "Hallway - x41y64z3" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y64z3.c",
  "east" : DIR+"/rooms/x42y64z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
