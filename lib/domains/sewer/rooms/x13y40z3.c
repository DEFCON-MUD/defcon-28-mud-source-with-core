inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 3 }));
  set_short( "Hallway - x13y40z3" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z3.c",
  "south" : DIR+"/rooms/x13y39z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
