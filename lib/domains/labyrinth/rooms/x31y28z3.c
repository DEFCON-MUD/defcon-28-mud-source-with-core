inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 28, 3 }));
  set_short( "Hallway - x31y28z3" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y29z3.c",
  "south" : DIR+"/rooms/x31y27z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
