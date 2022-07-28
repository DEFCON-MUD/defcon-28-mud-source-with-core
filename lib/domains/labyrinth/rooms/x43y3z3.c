inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 3, 3 }));
  set_short( "Hallway - x43y3z3" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y4z3.c",
  "south" : DIR+"/rooms/x43y2z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
