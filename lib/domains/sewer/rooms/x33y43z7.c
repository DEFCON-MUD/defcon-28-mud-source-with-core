inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 7 }));
  set_short( "Passage - x33y43z7" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z7.c",
  "south" : DIR+"/rooms/x33y42z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
