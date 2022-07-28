inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 38, 3 }));
  set_short( "Hallway - x6y38z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y38z3.c",
  "east" : DIR+"/rooms/x7y38z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
