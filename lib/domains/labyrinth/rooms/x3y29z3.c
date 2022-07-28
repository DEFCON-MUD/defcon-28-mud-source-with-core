inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 29, 3 }));
  set_short( "Hallway - x3y29z3" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y30z3.c",
  "south" : DIR+"/rooms/x3y28z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
