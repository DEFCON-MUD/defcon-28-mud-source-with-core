inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 9 }));
  set_short( "Hallway - x15y16z9" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y17z9.c",
  "south" : DIR+"/rooms/x15y15z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
