inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 9 }));
  set_short( "Passage - x5y6z9" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y6z9.c",
  "south" : DIR+"/rooms/x5y5z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
