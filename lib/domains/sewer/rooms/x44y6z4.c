inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 6, 4 }));
  set_short( "Passage - x44y6z4" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y6z4.c",
  "east" : DIR+"/rooms/x45y6z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
