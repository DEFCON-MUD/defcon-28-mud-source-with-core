inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 18, 2 }));
  set_short( "Passage - x7y18z2" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y18z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
