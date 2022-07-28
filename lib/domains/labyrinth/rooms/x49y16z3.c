inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 3 }));
  set_short( "Hallway - x49y16z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y17z3.c",
  "south" : DIR+"/rooms/x49y15z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
