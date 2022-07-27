inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 6 }));
  set_short( "Passage - x11y6z6" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y6z6.c",
  "south" : DIR+"/rooms/x11y5z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
