inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 3 }));
  set_short( "Hallway - x59y58z3" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y59z3.c",
  "south" : DIR+"/rooms/x59y57z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
