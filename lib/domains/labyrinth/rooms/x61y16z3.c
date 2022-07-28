inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 3 }));
  set_short( "Hallway - x61y16z3" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y17z3.c",
  "south" : DIR+"/rooms/x61y15z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
