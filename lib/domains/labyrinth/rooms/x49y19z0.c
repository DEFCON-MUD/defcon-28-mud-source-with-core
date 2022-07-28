inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 19, 0 }));
  set_short( "Passage - x49y19z0" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y20z0.c",
  "south" : DIR+"/rooms/x49y18z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
