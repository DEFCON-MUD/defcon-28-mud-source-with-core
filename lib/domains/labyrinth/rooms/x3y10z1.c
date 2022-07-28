inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 10, 1 }));
  set_short( "Passage - x3y10z1" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y10z1.c",
  "north" : DIR+"/rooms/x3y11z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
