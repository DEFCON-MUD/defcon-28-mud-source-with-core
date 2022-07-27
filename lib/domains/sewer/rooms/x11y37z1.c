inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 1 }));
  set_short( "Hallway - x11y37z1" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z1.c",
  "south" : DIR+"/rooms/x11y36z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
