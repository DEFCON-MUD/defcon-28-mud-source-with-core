inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 3 }));
  set_short( "Hallway - x35y28z3" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y29z3.c",
  "south" : DIR+"/rooms/x35y27z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
