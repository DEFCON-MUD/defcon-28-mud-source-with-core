inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 6 }));
  set_short( "Passage - x13y5z6" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z6.c",
  "south" : DIR+"/rooms/x13y4z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
