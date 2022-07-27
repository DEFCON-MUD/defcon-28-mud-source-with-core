inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 3, 5 }));
  set_short( "Passage - x41y3z5" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y4z5.c",
  "south" : DIR+"/rooms/x41y2z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
