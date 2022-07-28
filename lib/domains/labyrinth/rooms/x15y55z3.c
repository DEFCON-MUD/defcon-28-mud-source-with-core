inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 55, 3 }));
  set_short( "Hallway - x15y55z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y56z3.c",
  "south" : DIR+"/rooms/x15y54z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
