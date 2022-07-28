inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 4 }));
  set_short( "Hallway - x19y11z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z4.c",
  "south" : DIR+"/rooms/x19y10z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
