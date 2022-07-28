inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 2 }));
  set_short( "Passage - x27y44z2" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y44z2.c",
  "north" : DIR+"/rooms/x27y45z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
