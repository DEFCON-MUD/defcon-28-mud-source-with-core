inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 3 }));
  set_short( "Hallway - x1y12z3" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y13z3.c",
  "south" : DIR+"/rooms/x1y11z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
