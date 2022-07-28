inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 39, 3 }));
  set_short( "Hallway - x49y39z3" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y40z3.c",
  "south" : DIR+"/rooms/x49y38z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
