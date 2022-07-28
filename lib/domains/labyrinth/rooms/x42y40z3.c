inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 40, 3 }));
  set_short( "Hallway - x42y40z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y40z3.c",
  "east" : DIR+"/rooms/x43y40z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
