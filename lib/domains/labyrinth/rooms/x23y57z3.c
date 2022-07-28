inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 57, 3 }));
  set_short( "Passage - x23y57z3" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y58z3.c",
  "south" : DIR+"/rooms/x23y56z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
