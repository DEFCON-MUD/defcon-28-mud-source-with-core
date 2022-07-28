inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 29, 3 }));
  set_short( "Corridor - x57y29z3" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y30z3.c",
  "south" : DIR+"/rooms/x57y28z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
