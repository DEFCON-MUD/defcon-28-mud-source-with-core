inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 7 }));
  set_short( "Passage - x55y6z7" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y6z7.c",
  "south" : DIR+"/rooms/x55y5z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
