inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 8 }));
  set_short( "Passage - x1y33z8" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z8.c",
  "south" : DIR+"/rooms/x1y32z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
