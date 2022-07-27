inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 6 }));
  set_short( "Hallway - x1y40z6" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z6.c",
  "south" : DIR+"/rooms/x1y39z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
