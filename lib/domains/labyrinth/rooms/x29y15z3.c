inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 15, 3 }));
  set_short( "Corridor - x29y15z3" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y16z3.c",
  "south" : DIR+"/rooms/x29y14z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
