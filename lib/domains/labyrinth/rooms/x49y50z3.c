inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 3 }));
  set_short( "Hallway - x49y50z3" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y51z3.c",
  "south" : DIR+"/rooms/x49y49z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
