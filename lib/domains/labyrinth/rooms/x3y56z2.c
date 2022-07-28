inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 56, 2 }));
  set_short( "Passage - x3y56z2" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y57z2.c",
  "south" : DIR+"/rooms/x3y55z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
