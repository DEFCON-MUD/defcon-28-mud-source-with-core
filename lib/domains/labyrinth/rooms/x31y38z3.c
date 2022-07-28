inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 38, 3 }));
  set_short( "Hallway - x31y38z3" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y38z3.c",
  "east" : DIR+"/rooms/x32y38z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
