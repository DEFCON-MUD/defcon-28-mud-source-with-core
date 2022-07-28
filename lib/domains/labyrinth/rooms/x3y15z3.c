inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 15, 3 }));
  set_short( "Passage - x3y15z3" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y16z3.c",
  "south" : DIR+"/rooms/x3y14z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
