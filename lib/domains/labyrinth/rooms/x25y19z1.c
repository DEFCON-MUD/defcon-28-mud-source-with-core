inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 19, 1 }));
  set_short( "Passage - x25y19z1" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y20z1.c",
  "south" : DIR+"/rooms/x25y18z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
