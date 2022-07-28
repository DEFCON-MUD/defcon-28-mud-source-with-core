inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 56, 9 }));
  set_short( "Passage - x41y56z9" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y57z9.c",
  "south" : DIR+"/rooms/x41y55z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
