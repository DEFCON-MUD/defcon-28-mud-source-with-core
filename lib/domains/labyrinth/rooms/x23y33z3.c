inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 3 }));
  set_short( "Hallway - x23y33z3" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z3.c",
  "south" : DIR+"/rooms/x23y32z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
