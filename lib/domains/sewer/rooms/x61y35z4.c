inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 4 }));
  set_short( "Passage - x61y35z4" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z4.c",
  "south" : DIR+"/rooms/x61y34z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
