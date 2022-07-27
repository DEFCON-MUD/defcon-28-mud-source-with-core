inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 7 }));
  set_short( "Passage - x5y16z7" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y16z7.c",
  "south" : DIR+"/rooms/x5y15z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
