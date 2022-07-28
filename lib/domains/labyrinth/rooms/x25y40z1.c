inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 1 }));
  set_short( "Passage - x25y40z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y41z1.c",
  "south" : DIR+"/rooms/x25y39z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
