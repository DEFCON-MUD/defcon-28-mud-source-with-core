inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 13, 3 }));
  set_short( "Hallway - x1y13z3" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y14z3.c",
  "south" : DIR+"/rooms/x1y12z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
